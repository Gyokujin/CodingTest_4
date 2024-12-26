#include <vector>
#include <iostream>
using namespace std;

int calConsume(vector<int> &phones)
{
	int curPhone = 0; // 충전중인 휴대폰
	int curConsume = 0; // 가장 최근의 소모량
	int totalConsume = 0; // 배터리 소모량의 총합

	for (int phone : phones)
	{
		if (curPhone != phone)
			curConsume = 2;
		else
			curConsume *= 2;

		curPhone = phone;
		totalConsume += curConsume;

		if (totalConsume >= 100)
		{
			curPhone = 0;
			curConsume = 0;
			totalConsume = 0;
		}
	}

	return totalConsume;
}

int main()
{
	int N;
	cin >> N;

	vector<int> phones(N);
	
	for (int i = 0; i < phones.size(); i++)
		cin >> phones[i];

	int answer = calConsume(phones);
	cout << answer;
}