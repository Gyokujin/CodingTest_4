#include <iostream>
using namespace std;

int main()
{
	int num;
	int min = 101;
	int sum = 0;

	for (int i = 0; i < 7; i++)
	{
		cin >> num;

		if (num % 2 != 0)
		{
			sum += num;

			if (min > num)
				min = num;
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << endl << min;
}