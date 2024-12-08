#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	int N;
	cin >> N;

	vector<int> numbers(4);
	int maxPoint = 0;
	int point = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];
		sort(numbers.begin(), numbers.end());

		if (numbers[0] == numbers[3]) // 같은 눈이 4개인 경우
			point = 50000 + numbers[0] * 5000;
		else if (numbers[0] == numbers[2] || numbers[1] == numbers[3]) // 같은 눈이 3개인 경우
			point = 10000 + numbers[1] * 1000;
		else if (numbers[0] == numbers[1] && numbers[2] == numbers[3]) // 같은 눈이 2개씩 두 쌍
			point = 2000 + numbers[0] * 500 + numbers[2] * 500;
		else if (numbers[0] == numbers[1] || numbers[1] == numbers[2]) // 같은 눈이 2개인 경우. 1
			point = 1000 + numbers[1] * 100;
		else if (numbers[2] == numbers[3]) // 같은 눈이 2개인 경우. 2
			point = 1000 + numbers[2] * 100;
		else // 모두 다를 경우
			point = numbers[3] * 100;

		maxPoint = max(point, maxPoint);
	}

	cout << maxPoint;
}