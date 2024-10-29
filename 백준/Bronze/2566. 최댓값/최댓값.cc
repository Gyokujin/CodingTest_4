#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int maxX = 0;
	int maxY = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int num;
			cin >> num;

			if (num > max)
			{
				max = num;
				maxX = i;
				maxY = j;
			}
		}
	}

	cout << max << endl << maxX + 1 << ' ' << maxY + 1;
}