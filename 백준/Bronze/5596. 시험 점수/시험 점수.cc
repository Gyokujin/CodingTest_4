#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> points1(4);
	vector<int> points2(4);

	for (int i = 0; i < points1.size(); i++)
		cin >> points1[i];

	for (int i = 0; i < points2.size(); i++)
		cin >> points2[i];

	int sum1 = accumulate(points1.begin(), points1.end(), 0);
	int sum2 = accumulate(points2.begin(), points2.end(), 0);
	cout << max(sum1, sum2);
}