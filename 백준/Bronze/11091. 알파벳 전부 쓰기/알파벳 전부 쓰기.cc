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
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) // 알파벳일 경우 소문자로 변형 후 추가
				alphabets.insert(tolower(c));
		}

		if (alphabets.size() == 'z' - 'a' + 1) // 요소가 모두 존재한다면 pangram 출력
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