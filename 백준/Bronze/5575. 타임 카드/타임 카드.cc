#include <vector>
#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		vector<int> rushHour(3, 0);
		vector<int> closeHour(3, 0);
		vector<int> remainHour(3, 0);

		cin >> rushHour[0] >> rushHour[1] >> rushHour[2];
		cin >> closeHour[0] >> closeHour[1] >> closeHour[2];

		remainHour[2] = closeHour[2] - rushHour[2];

		if (remainHour[2] < 0)
		{
			remainHour[2] += 60;
			remainHour[1]--;
		}

		remainHour[1] = remainHour[1] + closeHour[1] - rushHour[1];

		if (remainHour[1] < 0)
		{
			remainHour[1] += 60;
			remainHour[0]--;
		}

		remainHour[0] = remainHour[0] + closeHour[0] - rushHour[0];
		cout << remainHour[0] << ' ' << remainHour[1] << ' ' << remainHour[2] << endl;
	}
}