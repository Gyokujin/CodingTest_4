#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int reverseNum(int &num)
{
	string sNum = to_string(num);
	reverse(sNum.begin(), sNum.end());
	return stoi(sNum);
}

bool symmetryCheck(int &num)
{
	string sNum = to_string(num);
	string symmetryNum = sNum;
	reverse(symmetryNum.begin(), symmetryNum.end());

	return sNum == symmetryNum;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		int sum = N + reverseNum(N);
		cout << (symmetryCheck(sum) ? "YES" : "NO") << endl;
	}
}