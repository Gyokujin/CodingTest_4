#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;

	while (true)
	{
		getline(cin, word);

		if (word.empty())
			break;

		cout << word << endl;
	}
}