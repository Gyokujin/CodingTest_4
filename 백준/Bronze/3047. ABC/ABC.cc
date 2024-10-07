#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string word;
	int input;
	vector<int> numbers;
	
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		numbers.push_back(input);
	}

	sort(numbers.begin(), numbers.end());
	cin >> word;

	for (char c : word)
	{
		switch (c)
		{
			case 'A':
				cout << numbers[0] << " ";
				break;

			case 'B':
				cout << numbers[1] << " ";
				break;

			case 'C':
				cout << numbers[2] << " ";
				break;
		}
	}
}
