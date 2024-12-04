#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string S;
	cin >> S;
	vector<string> words(S.size());

	for (int i = 0; i < S.size(); i++)
	{
		string word = S.substr(i, S.size());
		words[i] = word;
	}

	sort(words.begin(), words.end());

	for (string word : words)
		cout << word << endl;
}