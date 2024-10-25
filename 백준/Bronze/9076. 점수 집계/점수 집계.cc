#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		vector<int> points;
		
		for (int j = 0; j < 5; j++)
		{
			int point;
			cin >> point;
			points.push_back(point);
		}

		sort(points.begin(), points.end());

		if (*(points.end() - 2) - *(points.begin() + 1) >= 4)
			cout << "KIN" << endl;
		else
		{
			int total = 0;

			for (int j = 1; j < points.size() - 1; j++)
				total += points[j];

			cout << total << endl;
		}
	}
}