#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> numbers;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		numbers.push_back(num);
	}

	int min = *min_element(numbers.begin(), numbers.end());
	int max = *max_element(numbers.begin(), numbers.end());
	cout << min * max;
}