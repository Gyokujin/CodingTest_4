#include <iostream>
using namespace std;

int main()
{
	string word;
	cin >> word;
	int answer = 0;

	for (char c : word)
	{
		switch (c)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				answer++;
				break;
		}
	}

	cout << answer;
}