#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		for (int j = input - i; j > 0; j--)
			cout << ' ';

		for (int j = 2 * i - 1; j > 0; j--)
			cout << '*';

		cout << endl;
	}

	for (int i = input - 1; i > 0; i--)
	{
		for (int j = 0; j < input - i; j++)
			cout << ' ';

		for (int j = 2 * i - 1; j > 0; j--)
			cout << '*';

		cout << endl;
	}
}