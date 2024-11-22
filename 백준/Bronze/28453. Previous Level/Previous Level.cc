#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> numbers(N);

	for (int i = 0; i < numbers.size(); i++)
		cin >> numbers[i];

	for (int num : numbers)
	{
		int panel;

		if (num == 300)
			panel = 1;
		else if (num >= 275)
			panel = 2;
		else if (num >= 250)
			panel = 3;
		else
			panel = 4;

		cout << panel << ' ';
	}
}