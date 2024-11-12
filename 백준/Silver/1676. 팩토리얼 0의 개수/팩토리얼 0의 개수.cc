#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	int N;
	cin >> N;

	for (int i = 5; i <= N; i *= 5)
		answer += N / i;

	cout << answer;
}