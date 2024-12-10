#include <set>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string input;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		set<char> alphabets;
		getline(cin, input);

		for (char c : input)
		{
			if (c >= 'a' && c <= 'z')
				alphabets.insert(c);
			else if (c >= 'A' && c <= 'Z') // 대문자의 경우는 소문자로 변형후 추가(대문자와 소문자의 아스키 코드의 차이는 32)
				alphabets.insert(c + 32);
		}

		if (alphabets.size() == 'z' - 'a' + 1)
			cout << "pangram";
		else
		{
			cout << "missing ";

			for (int i = 'a'; i <= 'z'; i++)
			{
				if (alphabets.find((char)i) == alphabets.end())
					cout << (char)i;
			}
		}

		cout << endl;
	}
}