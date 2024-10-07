#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int index, numA, numB;
	string word;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		cin >> word;
		int targetIndex = word.find(',');

		numA = stoi(word.substr(0, targetIndex));
		numB = stoi(word.substr(targetIndex + 1, word.size() - targetIndex));
		cout << numA + numB << endl;
	}
}