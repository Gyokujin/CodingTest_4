#include <string>
#include <iostream>
using namespace std;

int mulFactors(int &num)
{
	int mul = 1;
	string sNum = to_string(num);

	for (char c : sNum)
		mul *= (int)c - 48;

	return mul;
}

int main()
{
	int answer = 0;
	int n;
	cin >> n;

	while (n >= 10)
	{
		n = mulFactors(n);
		answer++;
	}

	cout << answer;
}