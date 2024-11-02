#include <iostream>
using namespace std;

long long M = 1234567891; // 서로소
int r = 31;

int main()
{
	int R = 1;
	int L;
	string word;
	long long answer = 0;

	cin >> L;
	cin >> word;

	for (int i = 0; i < L; i++)
	{
		answer += ((int)word[i] - 96) * R % M;
		R = R * r % M;
	}

	cout << answer;
}