#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int B, N;

	while (true)
	{
		cin >> B >> N;
		
		if (B == 0 && N == 0)
			break;

		for (int i = 1; i <= 1000000; i++)
		{
			int square = pow(i, N);

			if (square >= B)
			{
				int square2 = pow(i - 1, N);

				if (abs(square - B) < abs(square2 - B))
					cout << i << endl;
				else
					cout << i - 1 << endl;

				break;
			}
		}
	}
}