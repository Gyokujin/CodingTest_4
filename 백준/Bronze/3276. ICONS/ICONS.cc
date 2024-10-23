#include <iostream>
using namespace std;

int main()
{
	int N;
	int squared = 1;
	cin >> N;
	
	while (N > squared * squared) // N이 제곱수중 어떤 수에 가장 근접한지 찾는다.
		squared++;

	if (N <= squared * (squared - 1))
		cout << squared << ' ' << squared - 1;
	else
		cout << squared << ' ' << squared;
}