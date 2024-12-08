#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int a, b;
		cin >> a >> b;

		int comMul = a * b; // 최소 공배수
		int comDiv = 1; // 최대 공약수

		for (int j = 2; j <= min(a, b); j++) // 최대 공약수를 먼저 구한다
		{
			if (a % j == 0 && b % j == 0)
				comDiv = j;
		}

		for (int j = max(a, b); j < a * b; j++) // 최대 공약수를 먼저 구한다
		{
			if (j % a == 0 && j % b == 0)
			{
				comMul = j; // 최소 공배수이기 때문에 발견 즉시 중지한다
				break;
			}
		}

		cout << comMul << ' ' << comDiv << endl;
	}
}