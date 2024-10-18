#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{	
	int N, M;
	cin >> N;

	float total = 0;
	int point;
	vector<int> points;

	for (int i = 0; i < N; i++)
	{
		cin >> point;
		points.push_back(point);
	}

	M = *max_element(points.begin(), points.end());

	for (int num : points)
	{
		total += (float)num / M * 100;
	}

	cout << total / N;
}