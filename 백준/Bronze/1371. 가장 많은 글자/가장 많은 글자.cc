#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

void alphabetCheck(string word, map<char, int> &alphabets)
{
	for (char c : word)
		alphabets[c]++;
}

void mostAlphabet(map<char, int>& alphabets)
{
	int maxCount = 0;

	for (map<char, int>::iterator it = alphabets.begin(); it != alphabets.end(); it++) // 첫번째 for은 map에서 가장 큰 값을 찾는다.
	{
		if (it->first != ' ' && it->second > maxCount) // 공백은 제외
			maxCount = it->second;
	}

	for (map<char, int>::iterator it = alphabets.begin(); it != alphabets.end(); it++) // 두번째 for은 가장 큰 값과 일치한 키를 출력한다(즉, 중복된 알파벳도 전부 출력)
	{
		if (it->first != ' ' && it->second == maxCount)
			cout << it->first;
	}
}

int main()
{
	map<char, int> alphabets;
	vector<string> words;
	string word;

	while (getline(cin, word)) // 입력이 없을 때까지 반복
		words.push_back(word);

	for (string s : words)
		alphabetCheck(s, alphabets); // vector에 저장된 문자열을 하나씩 매개변수로 전달

	mostAlphabet(alphabets);
}