#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	cin >> input;

	for (int i = 1; i <= input; i++)
	{
		for (int j = i; j > 0; j--)
			cout << '*';

		for (int j = 2 * (input - i); j > 0; j--)
			cout << ' ';

		for (int j = i; j > 0; j--)
			cout << '*';

		cout << endl;
	}

	for (int i = input - 1; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
			cout << '*';

		for (int j = 2 * (input - i); j > 0; j--)
			cout << ' ';

		for (int j = i; j > 0; j--)
			cout << '*';

		cout << endl;
	}
}