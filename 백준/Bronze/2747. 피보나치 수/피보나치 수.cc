#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	cin >> input;

	int answer = 0;
	int num1 = 0;
	int num2 = 1;

	if (input == 0)
		cout << 0;
	else if (input == 1)
		cout << 1;
	else
	{
		for (int i = 0; i < input - 1; i++)
		{
			answer = num1 + num2;
			num1 = num2;
			num2 = answer;
		}

		cout << answer;
	}
}