#include <iostream>
using namespace std;

void reversePrint(string &word)
{
	for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
}

int main()
{
	string word;
	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> word;
		reversePrint(word);
		cout << endl;
	}
}