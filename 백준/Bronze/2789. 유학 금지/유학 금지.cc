#include <iostream>
using namespace std;

int main()
{
	string answer = "";
	string word;
	cin >> word;

	for (char c : word)
	{
		switch (c)
		{
			case 'C':
			case 'A':
			case 'M':
			case 'B':
			case 'R':
			case 'I':
			case 'D':
			case 'G':
			case 'E':
				continue;

			default:
				answer += c;
				break;
		}
	}

	cout << answer;
}