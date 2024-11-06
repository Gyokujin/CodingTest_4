#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int> angles(3);
	int sum = 0;

	for (int i = 0; i < angles.size(); i++)
	{
		cin >> angles[i];
		sum += angles[i];
	}

	sort(angles.begin(), angles.end());

	if (angles[0] == 60 && angles[2] == 60)
		cout << "Equilateral";
	else if (sum == 180)
	{
		if (angles[0] == angles[1] || angles[1] == angles[2])
			cout << "Isosceles";
		else
			cout << "Scalene";
	}
	else
		cout << "Error";
}