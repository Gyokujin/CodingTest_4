#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int index, number;
	cin >> index;

	vector<int> numbers;

	for (int i = 0; i < index; i++)
	{
		cin >> number;
		numbers.push_back(number);
	}

	sort(numbers.begin(), numbers.end());
	cout << numbers[0] << ' ' << numbers[numbers.size() - 1];
}