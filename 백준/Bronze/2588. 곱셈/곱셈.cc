#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numA;
	int sum = 0;
	string numB;
	cin >> numA >> numB;

	cout << numA * int(numB[2] - 48) << endl;
	sum += numA * int(numB[2] - 48);

	cout << numA * int(numB[1] - 48) << endl;
	sum += (numA * int(numB[1] - 48)) * 10;

	cout << numA * int(numB[0] - 48) << endl;
	sum += (numA * int(numB[0] - 48)) * 100;

	cout << sum << endl;
}