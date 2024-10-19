#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		vector<int> distances;

		for (int j = 0; j < n; j++)
		{
			int xi;
			cin >> xi;

			distances.push_back(xi);

		}

		int maxDis = *max_element(distances.begin(), distances.end());
		int minDis = *min_element(distances.begin(), distances.end());
		cout << 2 * (maxDis - minDis) << endl;
	}
}