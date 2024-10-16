#include <iostream>
using namespace std;

int main()
{
	int input;
	cin >> input;

	for (int i = 0; i < 2 * input - 1; i++)
	{
		if (i < input)
		{
			for (int j = 0; j <= i; j++)
				cout << '*';
		}
		else
		{
			for (int j = i; j < input * 2 - 1; j++)
				cout << '*';
		}

		cout << endl;
	}
}