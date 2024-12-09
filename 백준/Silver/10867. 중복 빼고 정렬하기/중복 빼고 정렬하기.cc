#include <set>
#include <iostream>
using namespace std;

int main()
{
	set<int> numbers;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;
		numbers.insert(number);
	}

	int count = 0;

	for (set<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		cout << *it << ' ';
		count++;

		if (count == N)
			break;
	}
}