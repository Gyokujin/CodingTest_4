#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;

	string word = "";
	word += input[0];

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '-')
			word += input[i + 1];
	}

	cout << word;
}