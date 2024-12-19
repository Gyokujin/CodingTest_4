#include <iostream>
using namespace std;

bool bsaCount(string & word, int & b, int & s, int & a)
{
	for (char c : word)
	{
		switch (c)
		{
			case 'B':
				b++;
				break;

			case 'S':
				s++;
				break;

			case 'A':
				a++;
				break;
		}
	}
	
	return b == s && s == a;
}

void maxCount(int& b, int& s, int& a)
{
	int maxCount = max(max(b, s), a);

	if (maxCount == b)
		cout << 'B';

	if (maxCount == s)
		cout << 'S';

	if (maxCount == a)
		cout << 'A';
}

int main()
{
	int N;
	cin >> N;

	string word;
	cin >> word;

	int bCount = 0;
	int sCount = 0;
	int aCount = 0;

	if (bsaCount(word, bCount, sCount, aCount))
		cout << "SCU";
	else
		maxCount(bCount, sCount, aCount);
}