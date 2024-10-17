#include <iostream>
using namespace std;

int main()
{
	int index;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		int num1, num2;
		cin >> num1 >> num2;
		cout << "Case " << i + 1 << ": " << num1 + num2 << endl;
	}
}