#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	while (true)
	{
		int number;
		cin >> number;

		if (number == 0)
			break;

		cout << number << (number % n == 0 ? " is " : " is NOT ") << "a multiple of " << n << '.' << endl;
	}
}