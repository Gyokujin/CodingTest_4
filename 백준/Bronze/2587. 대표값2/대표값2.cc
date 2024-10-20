#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int> numbers;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		sum += num;
		numbers.push_back(num);
	}

	sort(numbers.begin(), numbers.end());
	cout << sum / 5 << endl << numbers[2];
}