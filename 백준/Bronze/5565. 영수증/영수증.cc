#include <iostream>
using namespace std;

int main()
{
	int remainPrice, price = 0;
	cin >> remainPrice;

	for (int i = 0; i < 9; i++)
	{
		cin >> price;
		remainPrice -= price;
	}

	cout << remainPrice;
}