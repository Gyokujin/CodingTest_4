#include <iostream>
using namespace std;

float prices[] = { 350.34f, 230.90f, 190.55f, 125.30f, 180.90f };

int main()
{
	cout << fixed;
	cout.precision(2);

	int counts[5];
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		float totalPrice = 0;

		for (int j = 0; j < sizeof(counts) / sizeof(counts[0]); j++)
			cin >> counts[j];

		for (int j = 0; j < sizeof(counts) / sizeof(counts[0]); j++)
			totalPrice += prices[j] * counts[j];

		cout << '$' << totalPrice << endl;
	}
}