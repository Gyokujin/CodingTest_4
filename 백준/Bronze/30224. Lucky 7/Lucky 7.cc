#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	string sNum = to_string(num);

	if (find(sNum.begin(), sNum.end(), '7') != sNum.end()) // 숫자 7이 포함되어 있는 경우
	{
		if (num % 7 == 0)
			cout << 3;
		else
			cout << 2;
	}
	else
	{
		if (num % 7 == 0)
			cout << 1;
		else
			cout << 0;
	}
}