#include <iostream>
using namespace std;

int main()
{
	int input1, input2;
	cin >> input1 >> input2;

	cout << fixed;
	cout.precision(9);
	cout << (double)input1 / input2;
}