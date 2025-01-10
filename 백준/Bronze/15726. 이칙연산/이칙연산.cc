#include <iostream>
using namespace std;

int biggerNum(int &num1, int &num2, int &num3)
{
	double cal1 = (double)num1 * num2 / num3;
	double cal2 = (double)num1 / num2 * num3;
	return max(cal1, cal2);
}

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int answer = biggerNum(A, B, C);
	cout << answer;
}