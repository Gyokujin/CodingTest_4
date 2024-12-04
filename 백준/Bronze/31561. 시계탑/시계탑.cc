#include <iostream>
using namespace std;

int main()
{
	cout << fixed;
	cout.precision(1);

	float answer = 0;
	float M;
	cin >> M;

	if (M <= 30)
		answer = M / 2;
	else
		answer = 15 + (M - 30) * ((float)3 / 2);

	cout << answer;
}