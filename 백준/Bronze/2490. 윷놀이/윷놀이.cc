#include <iostream>
using namespace std;

int main()
{	
	int num1, num2, num3, num4;

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		cin >> num1 >> num2 >> num3 >> num4;
		sum = num1 + num2 + num3 + num4;

		switch (sum)
		{
			case 0:
				cout << 'D' << endl;
				break;

			case 1:
				cout << 'C' << endl;
				break;

			case 2:
				cout << 'B' << endl;
				break;

			case 3:
				cout << 'A' << endl;
				break;

			case 4:
				cout << 'E' << endl;
				break;
		}
	}
}