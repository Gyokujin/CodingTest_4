#include <string>
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++)
	{
		string S;
		getline(cin, S);

		string curWord = "";
		int sum = 0;

		for (char c : S)
		{
			if (c == ' ')
			{
				sum += stoi(curWord);
				curWord = "";
			}
			else
				curWord += c;
		}

		sum += stoi(curWord);
		cout << sum << endl;
	}
}