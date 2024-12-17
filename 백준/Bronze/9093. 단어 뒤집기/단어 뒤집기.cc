#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> sentenceDivide(string &sentence)
{
	vector<string> words;
	string curWord = "";

	for (char c : sentence)
	{
		if (c == ' ')
		{
			words.push_back(curWord);
			words.push_back(" "); // 공백도 필요하기 때문에 추가
			curWord = "";
		}
		else
			curWord += c;
	}

	if (!curWord.empty())
		words.push_back(curWord);

	return words;
}

void reversePrint(string &word)
{
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
}

int main()
{
	int T;
	cin >> T;
	cin.ignore();

	string input;
	vector<string> words;

	for (int i = 0; i < T; i++)
	{
		getline(cin, input);
		words = sentenceDivide(input); // 공백을 포함한 문자열이기 때문에 공백을 기준으로 벡터에 저장

		for (string word : words)
			reversePrint(word);

		cout << endl;
	}
}