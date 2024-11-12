#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool stringCheck(string _word, string targetWord)
{
	int count = 0;

	for (int i = 0; i <= _word.size() - targetWord.size(); i++)
	{
		if (_word.substr(i, targetWord.size()) == targetWord)
			count++;
	}

	return count > 0;
}

int main()
{
	int count = 0;
	vector<string> words(5);

	for (int i = 0; i < words.size(); i++)
		cin >> words[i];

	for (int i = 0; i < words.size(); i++)
	{
		string word = words[i];

		if (stringCheck(word, "FBI"))
		{
			cout << i + 1 << ' ';
			count++;
		}
	}

	if (count == 0)
		cout << "HE GOT AWAY!";
}