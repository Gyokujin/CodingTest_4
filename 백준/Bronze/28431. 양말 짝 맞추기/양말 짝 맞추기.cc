#include <map>
#include <iostream>
using namespace std;

int main()
{
	map<int, int> numbers;
	int input;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		numbers[input]++;
	}

	for (map<int, int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (it->second % 2 != 0)
			cout << it->first;
	}
}