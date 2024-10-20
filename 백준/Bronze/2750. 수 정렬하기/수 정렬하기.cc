#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int> numbers;
	int index;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		int num;
		cin >> num;
		numbers.push_back(num);
	}

	sort(numbers.begin(), numbers.end());

	for (int num : numbers)
		cout << num << endl;
}