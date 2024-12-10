#include <string>
#include <iostream>
using namespace std;

int main()
{
	string S;
	string curS;
	cin >> S;

	while (getline(cin, curS))
		S += curS;

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