#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

string vowelReplace(string &sentence)
{
	bool isEnd = false;

	for (int i = 0; i < sentence.size(); i++)
	{
		char c = sentence[i];

		switch (c)
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				sentence[i + 1] = '0';
				sentence[i + 2] = '0';
				break;
		}
	}

	return sentence;
}

string vowelOrganize(string& sentence)
{
	while (sentence.find('0') != string::npos)
	{
		int index = sentence.find('0');
		sentence.erase(sentence.begin() + index);
	}

	return sentence;
}

int main()
{
	string sentence;
	getline(cin, sentence);

	sentence = vowelReplace(sentence);
	sentence = vowelOrganize(sentence);
	cout << sentence;
}