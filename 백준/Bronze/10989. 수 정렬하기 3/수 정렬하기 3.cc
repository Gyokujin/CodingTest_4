#include <map>
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<int, int> numbers;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;
		numbers[number]++;
	}

	for (pair<int ,int> curPair : numbers)
	{
		for (int i = 0; i < curPair.second; i++)
			cout << curPair.first << "\n";
	}
}