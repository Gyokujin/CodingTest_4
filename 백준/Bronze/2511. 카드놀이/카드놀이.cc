#include <vector>
#include <iostream>
using namespace std;

void initCards(vector<int>& cardsA, vector<int>& cardsB)
{
	for (int i = 0; i < cardsA.size(); i++)
		cin >> cardsA[i];

	for (int i = 0; i < cardsB.size(); i++)
		cin >> cardsB[i];
}

pair<char, vector<int>> roundCheck(vector<int>& a, vector<int>& b)
{
	pair<char, vector<int>> result;

	char lastWinner = 'D'; // 비겼을 경우를 기본값으로 한다.
	vector<int> points = { 0, 0 };

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == b[i]) // 비겼을 경우 1점씩 추가
		{
			points[0]++;
			points[1]++;
		}
		else if (a[i] > b[i])
		{
			lastWinner = 'A';
			points[0] += 3;
		}
		else
		{
			lastWinner = 'B';
			points[1] += 3;
		}
	}

	// 만들어진 벡터를 바탕으로 승자를 판정
	if (points[0] == points[1]) // 두 점수가 같은 경우 최종 승자로 판단(전부 비겼을 경우도 기본값으로 반환하기 때문에 무관)
		result = { lastWinner, { points[0], points[1] } };
	else if (points[0] > points[1])
		result = { 'A', { points[0], points[1] } };
	else
		result = { 'B', { points[0], points[1] } };

	return result;
}

int main()
{
	vector<int> cardsA(10);
	vector<int> cardsB(10);
	initCards(cardsA, cardsB);

	pair<char, vector<int>> result = roundCheck(cardsA, cardsB);
	cout << result.second[0] << ' ' << result.second[1] << endl;
	cout << result.first;
}