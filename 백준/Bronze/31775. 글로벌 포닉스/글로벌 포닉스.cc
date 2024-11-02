#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<char> keywords;

	for (int i = 0; i < 3; i++)
	{
		string word;
		cin >> word;
		keywords.push_back(word[0]);
	}

	sort(keywords.begin(), keywords.end());

	if (keywords[0] == 'k' && keywords[1] == 'l' && keywords[2] == 'p') // 알파벳은 k, l, p 순서
		cout << "GLOBAL";
	else
		cout << "PONIX";
}