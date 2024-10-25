#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int K;
	cin >> K;

	for (int i = 0; i < K; i++)
	{
		int P, M;
		cin >> P >> M;
		vector<bool> places(M);
		int out = 0;

		for (int j = 0; j < P; j++)
		{
			int place;
			cin >> place;

			if (!places[place - 1]) // 해당 벡터가 false라면 true로 변경하여 자리를 채운다.
				places[place - 1] = true;
			else // true라면 이미 있는 자리이기 때문에 out에 1을 더한다.
				out++;
		}

		cout << out << endl;
	}
}