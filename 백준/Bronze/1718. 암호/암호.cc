#include <string>
#include <iostream>
using namespace std;

string encryption(string &word1, string &word2)
{
	string pass = "";

	for (int i = 0; i < word1.size(); i++)
	{
		if (word1[i] == ' ')
			pass += ' ';
		else
		{
			int index = word1[i] - word2[i % word2.size()] - 1;

			if (index < 0)
				index += 26;

			pass += index + 97;
		}
	}

	return pass;
}

int main()
{
	string word1, word2; // 평문, 암호화 키
	getline(cin, word1);
	cin >> word2;

	string answer = encryption(word1, word2);
	cout << answer;
}