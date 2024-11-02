#include <iostream>
using namespace std;

long long M = 1234567891; // 서로소
int a = 1;
int r = 31;

int main()
{
	long long answer = 0;
	int L;
	string word;

	cin >> L;
	cin >> word;

	for (char c : word)
	{
		answer = (answer + ((int)c - 96) * a) % M;
		a = a * r % M;
	}

	cout << answer;
}