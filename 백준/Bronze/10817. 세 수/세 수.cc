#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int input1, input2, input3;
	cin >> input1 >> input2 >> input3;

	vector<int> numbers;
	numbers.push_back(input1);
	numbers.push_back(input2);
	numbers.push_back(input3);
	sort(numbers.begin(), numbers.end());

	cout << numbers[1];
}