#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word;
	cin >> word;

	for (int i = 0; i < 26; i++)
	{
		char alphabet = char(i + 97);
		int count = word.find(alphabet);
		cout << count << " ";
	}
}