#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool comp(string & a, string & b)
{
	for (int i = 0; i < min(a.size(), b.size()); i++)
	{
		if (tolower(a[i]) != tolower(b[i]))
			return tolower(a[i]) < tolower(b[i]);
	}

	return a.size() < b.size(); // 문자열의 길이가 다르면 앞의 요소가 전부 같다면 짧은 문자열이 먼저 배치되야 한다.
}

int main()
{
	int n;

	while (true)
	{
		cin >> n;

		if (n == 0)
			break;

		vector<string> words(n);

		for (int i = 0; i < n; i++)
			cin >> words[i];

		sort(words.begin(), words.end(), comp);
		cout << words[0] << endl;
	}
}