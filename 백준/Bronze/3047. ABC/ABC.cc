#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

// 세 수 A, B, C가 주어진다. A는 B보다 작고, B는 C보다 작다.
// 세 수 A, B, C가 주어졌을 때, 입력에서 주어진 순서대로 출력하는 프로그램을 작성하시오.
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