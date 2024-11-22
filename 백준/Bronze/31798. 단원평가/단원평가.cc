#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int answer;
	int a, b, c;
	cin >> a >> b >> c;

	if (c == 0)
		answer = sqrt(a + b);
	else
		answer = (c * c) - (a + b);

	cout << answer;
}