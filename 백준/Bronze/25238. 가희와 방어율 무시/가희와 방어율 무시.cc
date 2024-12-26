#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	float calDef = a * ((100 - b) * 0.01);
	cout << (calDef < 100);
}