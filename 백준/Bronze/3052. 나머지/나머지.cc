#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> average;
	int input;

	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		average.insert(input % 42);
	}

	cout << average.size();
}