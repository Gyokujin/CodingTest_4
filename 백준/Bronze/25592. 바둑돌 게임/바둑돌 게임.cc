#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int turn = 1;
	int answer = 0;

	while (N >= 0)
	{
		if (N - turn < 0)
		{
			if (turn % 2 != 0) // 내 턴
				answer = turn - N;
			else // 상대 턴
				break;
		}

		N -= turn;
		turn++;
	}

	cout << answer;
}