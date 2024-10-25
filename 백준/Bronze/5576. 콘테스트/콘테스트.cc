#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int>wPoints(10);
	vector<int>kPoints(10);

	for (int i = 0; i < wPoints.size(); i++)
	{
		int point;
		cin >> point;
		wPoints[i] = point;
	}

	for (int i = 0; i < kPoints.size(); i++)
	{
		int point;
		cin >> point;
		kPoints[i] = point;
	}

	sort(wPoints.begin(), wPoints.end());
	sort(kPoints.begin(), kPoints.end());

	int wSum = *(wPoints.end() - 1) + *(wPoints.end() - 2) + *(wPoints.end() - 3);
	int kSum = *(kPoints.end() - 1) + *(kPoints.end() - 2) + *(kPoints.end() - 3);

	cout << wSum << ' ' << kSum;
}