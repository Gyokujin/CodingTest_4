#include <iostream>
using namespace std;

int main()
{
	int N, K;
	int count = 0;
	int answer = 0;
	cin >> N >> K;

	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			count++;

			if (K == count)
			{
				answer = i;
				break;
			}
		}
	}

	cout << answer;
}