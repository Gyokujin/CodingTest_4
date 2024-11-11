#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * factorial(n - 1);
}


int main()
{
	int N, K;
	cin >> N >> K;

	int answer = factorial(N) / (factorial(N - K) * factorial(K));
	cout << answer;
}