#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int aPoint = 0;
	int bPoint = 0;
	
	vector<int> aCards(10);
	vector<int> bCards(10);

	for (int i = 0; i < aCards.size(); i++)
		cin >> aCards[i];

	for (int i = 0; i < bCards.size(); i++)
		cin >> bCards[i];

	for (int i = 0; i < aCards.size(); i++)
	{
		if (aCards[i] > bCards[i])
			aPoint++;
		else if (aCards[i] < bCards[i])
			bPoint++;
	}

	if (aPoint == bPoint)
		cout << 'D';
	else
		cout << (aPoint > bPoint ? 'A' : 'B');
}