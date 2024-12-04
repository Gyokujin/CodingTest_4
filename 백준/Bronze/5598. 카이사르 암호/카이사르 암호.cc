#include <iostream>
using namespace std;

int main()
{
	string answer = "";
	string word;
	cin >> word;

	for (char c : word)
	{
		char curC = c - 3;
		
		if (curC < 'A')
			curC += 26;

		cout << curC;
	}
}