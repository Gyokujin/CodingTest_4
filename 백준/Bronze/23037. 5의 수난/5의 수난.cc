#include <string>
#include <iostream>
using namespace std;

int fiveSquared(int curNum)
{
	int num = curNum;

	for (int i = 0; i < 4; i++)
		num *= curNum;

	return num;
}

int main()
{
	int num;
	int sum = 0;
	cin >> num;

	for (char c : to_string(num))
	{
		int curNum = (int)c - 48;
		int squaredNum = fiveSquared(curNum);
		sum += squaredNum;
	}

	cout << sum;
}