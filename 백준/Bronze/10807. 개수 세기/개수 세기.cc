#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> numbers;
	int index = 5;
	int input;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		cin >> input;
		numbers.push_back(input);
	}

	cin >> input;

	int answer = count(numbers.begin(), numbers.end(), input);
	cout << answer;
}