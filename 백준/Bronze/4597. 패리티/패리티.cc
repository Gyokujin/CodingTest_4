#include <iostream>
using namespace std;

void bitcompletion(string &bitString)
{
	int count = 0;

	for (int i = 0; i < bitString.size() - 1; i++)
	{
		if (bitString[i] == '1')
			count++;
	}

	if (*(bitString.end() - 1) == 'e') // 짝수 패러티
	{
		if (count % 2 == 0)
			*(bitString.end() - 1) = '0';
		else
			*(bitString.end() - 1) = '1';
	}
	else // 홀수 패러티
	{
		if (count % 2 == 0)
			*(bitString.end() - 1) = '1';
		else
			*(bitString.end() - 1) = '0';
	}
}

int main()
{
	string bitString;

	while (true)
	{
		cin >> bitString;

		if (bitString == "#")
			break;

		bitcompletion(bitString);
		cout << bitString << endl;
	}
}