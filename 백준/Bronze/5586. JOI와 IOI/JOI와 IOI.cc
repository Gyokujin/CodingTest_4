#include <iostream>
using namespace std;

int main()
{
	int joiCount = 0;
	int ioiCount = 0;
	string word;
	cin >> word;

	for (int i = 0; i <= word.size() - 3; i++)
	{
		string subWord = word.substr(i, 3);

		if (subWord == "JOI")
			joiCount++;
		else if (subWord == "IOI")
			ioiCount++;
	}

	cout << joiCount << endl;
	cout << ioiCount << endl;
}