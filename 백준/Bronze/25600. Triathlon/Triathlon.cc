#include <iostream>
using namespace std;

int main()
{
	int maxPoint = 0;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int a, d, g;
		cin >> a >> d >> g;
		
		int point = a * (d + g);
		
		if (a == d + g)
			point *= 2;

		if (maxPoint < point)
			maxPoint = point;
	}

	cout << maxPoint;
}