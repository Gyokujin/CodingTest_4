#include <set>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string input;

	while (true)
	{
		getline(cin, input);

		if (input == "*")
			break;

		set<char> alphabets;

		for (char c : input)
		{
			if (c != ' ') // 공백은 생략한다.
				alphabets.insert(c);
		}

		cout << (alphabets.size() == 26 ? 'Y' : 'N') << endl; // 알파벳의 개수는 26개
	}
}