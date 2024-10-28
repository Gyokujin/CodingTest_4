#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int answer = 0;

	for (int i = 0; i < N; i++)
	{
		string word;
		cin >> word;
		char lastC = word[0];
		bool isAble = true;
		vector<char> useAlphabets = { lastC };

		for (int j = 1; j < word.size(); j++)
		{
			if (word[j] != lastC) // 연속이 끊어졌을 경우 비교한다
			{
				if (find(useAlphabets.begin(), useAlphabets.end(), word[j]) == useAlphabets.end())
				{
					useAlphabets.push_back(word[j]);
					lastC = word[j];
				}
				else
				{
					isAble = false;
					break;
				}
			}
		}

		if (isAble)
			answer++;
	}

	cout << answer;
}