#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> points(N);

	for (int i = 0; i < points.size(); i++)
		cin >> points[i];

	sort(points.begin(), points.end(), greater<int>());
	cout << points[K - 1];
}