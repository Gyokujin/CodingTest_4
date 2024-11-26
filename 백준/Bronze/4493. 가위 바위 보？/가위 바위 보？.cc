#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int count = 0; // 플레이어1이 승리시 1증가, 패배시 1감소
		int n;
		cin >> n;

		for (int j = 0; j < n; j++)
		{
			char player1, player2;
			cin >> player1 >> player2;

			switch (player1) // 비길 경우는 생략
			{
				case 'R': // 바위
					switch (player2)
					{
						case 'P':
							count--;
							break;

						case 'S':
							count++;
							break;
					}
					break;

				case 'P': // 보
					switch (player2)
					{
						case 'R':
							count++;
							break;

						case 'S':
							count--;
							break;
					}
					break;

				case 'S': // 가위
					switch (player2)
					{
						case 'R':
							count--;
							break;

						case 'P':
							count++;
							break;
					}
					break;
			}
		}

		if (count > 0)
			cout << "Player 1" << endl;
		else if (count == 0)
			cout << "TIE" << endl;
		else
			cout << "Player 2" << endl;
	}
}