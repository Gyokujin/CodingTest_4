#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	cin >> input;

	for (int i = 1; i <= 9; i++)
		cout << input << " * " << i << " = " << i * input << endl;
}