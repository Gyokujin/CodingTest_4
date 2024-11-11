#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	
	bool able = false;

	for (int i = -999; i < 1000; i++)
	{
		for (int j = -999; j < 1000; j++)
		{
			if (a * i + b * j == c && d * i + e * j == f) // x 양수, y 양수
			{
				x = i;
				y = j;
				able = true;
				break;
			}
		}

		if (able)
			break;
	}

	cout << x << ' ' << y;
}