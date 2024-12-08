#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		vector<char> exists('Z' - 'A' + 1);
		int sum = 0;

		string s;
		cin >> s;

		for (char c : s)
			exists[c - 'A'] = c;

		for (int i = 0; i < exists.size(); i++)
		{
			if (exists[i] == NULL)
				sum += i + 'A';
		}
			
		cout << sum << endl;
	}
}