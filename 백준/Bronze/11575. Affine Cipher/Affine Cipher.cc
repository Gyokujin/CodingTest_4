#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int a, b;
		string s;
		string answer = "";

		cin >> a >> b;
		cin >> s;

		for (char c : s)
		{
			int ascii = (a * (c - 65) + b) % 26; // aX + b를 한 후 26으로 나눈 나머지를 구한다.
			cout << char(ascii + 65);
		}

		cout << endl;
	}
}