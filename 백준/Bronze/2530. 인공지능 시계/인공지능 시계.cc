#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D; // 시, 분, 초
	cin >> A >> B >> C >> D;
	
	C += D;

	B += C / 60;
	C %= 60;

	A += B / 60;
	B %= 60;

	A %= 24;

	cout << A << ' ' << B << ' ' << C;
}