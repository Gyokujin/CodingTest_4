#include <iostream>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min = 0;

	for (int i = M; i <= N; i++)
	{
		bool isAble = true;

		if (i == 1)
			continue;

		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isAble = false;
				break;
			}
		}

		if (isAble)
		{
			if (min == 0)
				min = i;

			sum += i;
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << endl << min;
}