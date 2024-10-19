#include <iostream>
using namespace std;

int main()
{	
	int maxIndex = 0;
	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		int input;
		int sum = 0;

		for (int j = 0; j < 4; j++)
		{
			cin >> input;
			sum += input;
		}

		if (sum > max)
		{
			maxIndex = i + 1;
			max = sum;
		}
	}

	cout << maxIndex << ' ' << max;
}