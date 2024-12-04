#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int a = 0;
	int b = 0;

	for (int i = 0; i < N; i++)
	{
		int pointA, pointB;
		cin >> pointA >> pointB;
		
		if (pointA > pointB)
			a++;
		else if (pointA < pointB) // 무승부는 포함하지 않는다
			b++;
	}

	cout << a << ' ' << b;
}