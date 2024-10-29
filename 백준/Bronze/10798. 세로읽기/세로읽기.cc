#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<string> words(5);
	int maxLength = 0;

	for (int i = 0; i < words.size(); i++)
	{
		string word;
		cin >> word;
		words[i] = word;

		if (word.size() > maxLength)
			maxLength = word.size();
	}

	for (int i = 0; i < maxLength; i++)
	{
		for (int j = 0; j < words.size(); j++)
		{
			if (words[j].size() > i)
				cout << words[j][i];
		}
	}
}