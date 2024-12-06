#include <vector>
#include <iostream>
using namespace std;

vector<string> whiteBoard =
{
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" }
};

vector<string> blackBoard =
{
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" }
};

int chessCount(vector<string> curChess, int startX, int startY)
{
	int minWhite = 0;
	int minBlack = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (curChess[i + startY][j + startX] != whiteBoard[i][j])
				minWhite++;

			if (curChess[i + startY][j + startX] != blackBoard[i][j])
				minBlack++;
		}
	}

	return min(minWhite, minBlack);
}

int main()
{
	int answer = 65; // 8 * 8 체스판의 크기보다 더 큰 값을 초기값으로 둔다.
	int N, M;
	cin >> N >> M;
	vector<string> chess(N);

	for (int i = 0; i < N; i++)
		cin >> chess[i];

	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			int count = chessCount(chess, j, i);
			answer = min(answer, count);
		}
	}

	cout << answer;
}