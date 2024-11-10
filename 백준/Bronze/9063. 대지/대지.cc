#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	int N;
	cin >> N;
	vector<int> xPoints(N);
	vector<int> yPoints(N);

	for (int i = 0; i < N; i++)
		cin >> xPoints[i] >> yPoints[i];

	int xMax = *max_element(xPoints.begin(), xPoints.end());
	int xMin = *min_element(xPoints.begin(), xPoints.end());
	int yMax = *max_element(yPoints.begin(), yPoints.end());
	int yMin = *min_element(yPoints.begin(), yPoints.end());

	if (xMax != xMin && yMax != yMin)
		answer = (xMax - xMin) * (yMax - yMin);

	cout << answer;
}