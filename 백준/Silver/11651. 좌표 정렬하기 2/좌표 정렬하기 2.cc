#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> points(N, vector<int>(2));

	for (int i = 0; i < N; i++)
		cin >> points[i][1] >> points[i][0];

	sort(points.begin(), points.end());

	for (vector<int> point : points)
		cout << point[1] << ' ' << point[0] << "\n";
}