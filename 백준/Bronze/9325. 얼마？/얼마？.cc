#include <iostream>
using namespace std;

int main()
{
	int testIndex;
	cin >> testIndex;

	for (int i = 0; i < testIndex; i++)
	{
		int sumPrice, n;
		cin >> sumPrice;
		cin >> n;

		for (int j = 0; j < n; j++)
		{
			int q, p;
			cin >> q >> p;
			sumPrice += q * p;
		}

		cout << sumPrice << endl;
	}
}