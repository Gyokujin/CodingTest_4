#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	int N, K, P;
	cin >> N >> K >> P;
	vector<int> breads(N * K);

	for (int i = 0; i < N * K; i++)
		cin >> breads[i];

	for (int i = 0; i < N; i++)
	{
		int count = 0;

		for (int j = 0; j < K; j++)
		{
			if (breads[K * i + j] == 0)
				count++;
		}

		if (count < P)
			answer++;
	}

	cout << answer;
}