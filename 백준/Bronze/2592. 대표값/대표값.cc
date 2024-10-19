#include <map>
#include <iostream>
using namespace std;

int main()
{	
	map<int, int> numbers;
	int input;
	int sum = 0;
	int lot = 0;
	int lotIndex = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		numbers[input]++;
	}

	for (pair<int, int>curNum : numbers)
	{
		sum += curNum.first * curNum.second;

		if (lotIndex < curNum.second)
		{
			lot = curNum.first;
			lotIndex = curNum.second;
		}
	}

	cout << sum / 10 << endl << lot;
}