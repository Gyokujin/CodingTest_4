#include <vector>
#include <iostream>
using namespace std;

vector<string> chessInit()
{
	vector<string> board(8);

	for (int i = 0; i < board.size(); i++)
		cin >> board[i];

	return board;
}

int chessScore(vector<string> &board)
{
	int score = 0;

	for (string line : board)
	{
		for (char c : line)
		{
			switch (c) // 킹과 빈칸의 경우는 점수에 영향을 주지 않기 때문에 제외
			{
				case 'P':
					score++;
					break;

				case 'p':
					score--;
					break;

				case 'N':
				case 'B':
					score += 3;
					break;

				case 'n':
				case 'b':
					score -= 3;
					break;

				case 'R':
					score += 5;
					break;

				case 'r':
					score -= 5;
					break;

				case 'Q':
					score += 9;
					break;

				case 'q':
					score -= 9;
					break;
			}
		}
	}

	return score;
}

int main()
{
	vector<string> chessBoard = chessInit();
	int score = chessScore(chessBoard);
	cout << score;
}