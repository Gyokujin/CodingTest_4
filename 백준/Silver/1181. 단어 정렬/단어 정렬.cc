#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool compare(string a, string b)
{
	if (a.size() != b.size())
		return a.length() < b.length();

	return a < b; // 길이가 같을때는 알파벳 순으로 비교
}

int main()
{
	int N;
	cin >> N;
	vector<string> words(N);

	for (int i = 0; i < N; i++)
		cin >> words[i];

	sort(words.begin(), words.end(), compare);

	vector<string>::iterator it = unique(words.begin(), words.end()); // 정렬후 중복된 문자열 제거
	words.erase(it, words.end());

	for (string word : words)
		cout << word << endl;
}