#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 2; i <= N; i++)
	{
		if (N % i == 0)
		{
			cout << i << "\n";
			N /= i;
			i = 1; // 사용한 약수는 초기화
		}

		if (N == 1)
			break;
	}
}