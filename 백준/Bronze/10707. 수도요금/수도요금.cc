#include <iostream>
using namespace std;

int main()
{
	int A, B, C, D, P;
	cin >> A >> B >> C >> D >> P;

	int x = A * P; // X사의 요금
	int y = P <= C ? B : B + (P - C) * D; // Y사의 요금

	cout << min(x, y);
}