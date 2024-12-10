#include <string>
#include <iostream>
using namespace std;

int main()
{
	string S;
	cin >> S;

	string curWord = "";
	int sum = 0;

	for (char c : S)
	{
		if (c == ',')
		{
			sum += stoi(curWord);
			curWord = "";
		}
		else
			curWord += c;
	}

	sum += stoi(curWord);
	cout << sum;
}