#include <iostream>
using namespace std;

int main()
{
	int count = 1;
	int layer = 1;
	int N;
	cin >> N;

	while (count < N)
	{
		count += layer * 6;
		layer++;
	}

	cout << layer;
}