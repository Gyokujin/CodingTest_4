#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int sum = 0;
		int min = 101;

		for (int j = 0; j < 7; j++)
		{
			int num;
			cin >> num;

			if (num % 2 == 0)
			{
				sum += num;
				
				if (min > num)
					min = num;
			}
		}

		cout << sum << ' ' << min << endl;
	}
}