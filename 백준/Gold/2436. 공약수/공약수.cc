#include <vector>
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	return a;
}

int main()
{
	int num1, num2; // 최대 공약수와 최소 공배수
	cin >> num1 >> num2;
	
	int mul = num2 / num1; // 최대 공약수와 최소 공배수의 곱
	int A = 1;
	int B = mul;

	for (int i = 1; i * i <= mul; i++) // mul의 약수이며 서로 소인 두 수를 찾는다 
	{
		if (mul % i == 0 && gcd(i, mul / i) == 1) // mul의 약수이며, i와 mul / i가 서로 소인지 확인
		{
			A = i; 
			B = mul / i;
		}
	}

	A *= num1; // 그중 가장 큰 값에서 최대 공약수를 곱한게 최종 A와 B가 된다.
	B *= num1;
	cout << A << ' ' << B;
}