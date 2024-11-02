#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	bool papers[100][100] = { false };

	int count;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		int x, y;
		cin >> x >> y;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				if (!papers[j][k])
				{
					papers[j][k] = true;
					answer++;
				}
			}
		}
	}

	cout << answer;
}