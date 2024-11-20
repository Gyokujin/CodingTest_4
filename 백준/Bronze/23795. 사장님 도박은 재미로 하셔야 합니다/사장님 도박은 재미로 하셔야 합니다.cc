#include <iostream>
using namespace std;

int main()
{
	int sum = 0;

	while (true)
	{
		int input;
		cin >> input;

		if (input == -1)
			break;

		sum += input;
	}

	cout << sum;
}