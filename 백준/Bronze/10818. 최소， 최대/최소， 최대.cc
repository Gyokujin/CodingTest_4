#include <string>
#include <iostream>
using namespace std;

int main()
{
	int index, number;
	int minNum = 1000001;
	int maxNum = -1000001;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		cin >> number;

		if (minNum > number || minNum == 0)
			minNum = number;

		if (maxNum < number)
			maxNum = number;
	}

	cout << minNum << ' ' << maxNum;
}