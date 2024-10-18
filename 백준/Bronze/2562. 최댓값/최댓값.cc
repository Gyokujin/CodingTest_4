#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int maxIndex;
	
	for (int i = 0; i < 9; i++)
	{
		int num;
		cin >> num;

		if (num > max)
		{
			max = num;
			maxIndex = i + 1;
		}
	}

	cout << max << endl << maxIndex;
}