#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int num1, num2;
		cin >> num1 >> num2;

		if (num1 == 0 && num2 == 0)
			break;

		if (num2 % num1 == 0)
			cout << "factor";
		else if (num1 % num2 == 0)
			cout << "multiple";
		else
			cout << "neither";

		cout << endl;
	}
}