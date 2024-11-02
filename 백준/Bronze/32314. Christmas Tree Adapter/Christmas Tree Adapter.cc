#include <iostream>
using namespace std;

int main()
{
	int a, w, v; // 암페어, 와트, 볼트
	cin >> a;
	cin >> w >> v; // 후보 어뎁터 : 와트 / 볼트
	cout << (w / v >= a);
}