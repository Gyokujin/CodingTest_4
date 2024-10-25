#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char, int> alphabets;
	string input = "";
	char correct = ' ';
	int maxCount = 0;

	cin >> input;

	for (char c : input)
	{
		if ((int)c >= 97 && (int)c <= 122) // 97 ~ 122라면 -32
		{
			c = (int)c - 32;
		}

		alphabets[c]++;
	}

	bool same = false;

	for (auto& pair : alphabets)
	{
		if (maxCount <= pair.second)
		{
			same = maxCount == pair.second;
			correct = pair.first;
			maxCount = pair.second;
		}
	}

	if (same)
		cout << "?";
	else
		cout << correct;
}