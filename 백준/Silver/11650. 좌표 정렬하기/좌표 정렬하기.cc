#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> points;

	for (int i = 0; i < N; i++)
	{
		int x, y;
		cin >> x >> y;
		points.push_back({ x, y });
	}

	sort(points.begin(), points.end());

	for (vector<int> point : points)
		cout << point[0] << ' ' << point[1] << "\n";
}