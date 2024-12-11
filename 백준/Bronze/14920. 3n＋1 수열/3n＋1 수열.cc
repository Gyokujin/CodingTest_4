#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	int number;
	cin >> number;

	while (number != 1)
	{
		count++;

		if (number % 2 == 0)
			number /= 2;
		else
			number = 3 * number + 1;
	}

	cout << count;
}