#include <iostream>
using namespace std;

int main()
{
	int input;
	int sum = 0;
	cin >> input;

	for (int i = 1; i <= input; i++)
		sum += i;

	cout << sum;
}