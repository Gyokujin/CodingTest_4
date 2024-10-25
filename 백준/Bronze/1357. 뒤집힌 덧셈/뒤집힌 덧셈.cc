#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int reverseNum(int num)
{
	string sNum = to_string(num);
	reverse(sNum.begin(), sNum.end());

	if (sNum[0] == '0')
	{
		int index = 0;

		for (int i = 0; i < sNum.size(); i++)
		{
			if (sNum[i] != '0')
			{
				index = i;
				break;
			}
		}

		sNum = sNum.substr(index, sNum.size() - 1);
	}

	return stoi(sNum);
}

int main()
{
	int X, Y;
	cin >> X >> Y;

	X = reverseNum(X);
	Y = reverseNum(Y);
	cout << reverseNum(X + Y);
}