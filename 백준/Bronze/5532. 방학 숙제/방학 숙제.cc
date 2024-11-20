#include <iostream>
using namespace std;

int main()
{
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;

	while (true)
	{
		A -= C;
		B -= D;

		if (A <= 0 && B <= 0)
			break;

		L--;
	}

	cout << L - 1;
}