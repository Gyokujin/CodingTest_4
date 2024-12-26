#include <iostream>
using namespace std;

string addNum(string &A, string &B)
{
	int maxSize = max(A.size(), B.size()); // 자릿수 맞추기, 가장 앞자리에 0을 추가로 더하기를 준비
	A = string(maxSize + 1 - A.size(), '0') + A;
	B = string(maxSize + 1 - B.size(), '0') + B;
	string sum(maxSize + 1, '0');

	int carry = 0;

	for (int i = maxSize; i >= 0; i--)
	{
		int num = (A[i] - '0') + (B[i] - '0') + carry;
		carry = num / 10;
		sum[i] = (num % 10) + '0';
	}

	while (sum.length() > 1 && sum[0] == '0')
		sum.erase(0, 1);

	return sum;
}

int main()
{
	string A, B;
	cin >> A >> B;

	string num = addNum(A, B);
	cout << addNum(A, B);
}