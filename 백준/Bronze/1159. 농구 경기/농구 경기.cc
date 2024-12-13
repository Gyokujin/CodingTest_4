#include <map>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	bool isAble = false; // 출전 가능한 선수가 부족한지 확인
	map<char, int> players; // 선수의 성의 첫 글자를 담는 자료구조
	string input;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		players[input[0]]++;
	}

	for (map<char, int>::iterator it = players.begin(); it != players.end(); it++)
	{
		if (it->second >= 5)
		{
			cout << it->first;
			isAble = true;
		}
	}

	if (!isAble)
		cout << "PREDAJA";
}