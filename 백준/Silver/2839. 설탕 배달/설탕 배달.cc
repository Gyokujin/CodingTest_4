#include <iostream>
using namespace std;

int main()
{
	int answer = -1;

	int N;
	cin >> N;

	for (int i = N / 5; i >= 0; i--)
	{
		if ((N - (5 * i)) % 3 == 0)
		{
			answer = i + (N - (5 * i)) / 3; // i는 5짜리 봉지의 개수, N - (5 * i) / 3은 5짜리 봉지로 채우고 남은 값을 3으로 채울 때, 몇 개가 필요한 지이다.
			break;
		}
	}

	cout << answer;
}