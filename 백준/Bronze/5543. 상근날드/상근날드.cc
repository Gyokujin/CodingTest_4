#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int> bugerPrices;
	vector<int> drinkPrices;

	for (int i = 0; i < 3; i++)
	{
		int price;
		cin >> price;
		bugerPrices.push_back(price);
	}

	for (int i = 0; i < 2; i++)
	{
		int price;
		cin >> price;
		drinkPrices.push_back(price);
	}

	int setPrice = *min_element(bugerPrices.begin(), bugerPrices.end()) + *min_element(drinkPrices.begin(), drinkPrices.end()) - 50;
	cout << setPrice;
}