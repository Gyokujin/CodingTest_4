#include <iostream>
using namespace std;

int main()
{
	int A, B;

	while (true)
	{
		cin >> A >> B;

		if (cin.eof())
			break;

		cout << A + B << endl;
	}
}