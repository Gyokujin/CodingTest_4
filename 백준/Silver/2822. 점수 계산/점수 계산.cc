#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int> points;

	for (int i = 0; i < 8; i++)
	{
		int input;
		cin >> input;
		points.push_back(input);
	}

	vector<int> temp = points;
	vector<int> indexs;
	sort(temp.begin(), temp.end(), greater<int>());
	
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum += temp[i];
		int index = find(points.begin(), points.end(), temp[i]) - points.begin() + 1;
		indexs.push_back(index);
	}

	cout << sum << endl;

	sort(indexs.begin(), indexs.end());

	for (int num : indexs)
		cout << num << ' ';
}