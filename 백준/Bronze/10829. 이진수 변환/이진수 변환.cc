#include <algorithm>
#include <iostream>
using namespace std;

string binaryConversion(long long &number)
{
	string binary = "";

	while (number > 0)
	{
		binary += (number % 2 == 0 ? '0' : '1');
		number /= 2;
	}

	reverse(binary.begin(), binary.end());
	return binary;
}

int main()
{
	long long N;
	cin >> N;

	string answer = binaryConversion(N);
	cout << answer;
}