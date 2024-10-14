#include <iostream>
using namespace std;

int main()
{
	int input1, input2;
	cin >> input1 >> input2;

	int num1 = 0;
	int num2 = 0;

	for (int i = 1; i <= min(input1, input2); i++)
	{
		if (input1 % i == 0 && input2 % i == 0)
			num1 = i;
	}

	for (int i = max(input1, input2); i <= input1 * input2; i++)
	{
		if (i % input1 == 0 && i % input2 == 0)
		{
			num2 = i;
			break;
		}
	}

	cout << num1 << endl;
	cout << num2 << endl;
}