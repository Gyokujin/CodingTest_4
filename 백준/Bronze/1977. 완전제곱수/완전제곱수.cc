#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int M, N;
	cin >> M >> N;
	vector<int> numbers;

	for (int i = M; i <= N; i++)
	{
		for (int j = 1; j <= 10000; j++)
		{
			if (j * j == i)
			{
				numbers.push_back(i);
				break;
			}
			else if (j > i)
				break;
		}
	}

	if (numbers.empty())
		cout << -1;
	else
	{
		int sum = 0;
		int min = numbers[0];

		for (int num : numbers)
		{
			sum += num;

			if (min > num)
				min = num;
		}

		cout << sum << endl;
		cout << min;
	}
}