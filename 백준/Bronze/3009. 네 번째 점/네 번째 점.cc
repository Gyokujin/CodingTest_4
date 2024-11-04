#include <map>
#include <iostream>
using namespace std;

int main()
{
	int xPos = 0;
	int yPos = 0;
	map<int, int> xCount;
	map<int, int> yCount;

	for (int i = 0; i < 3; i++)
	{
		int x, y;
		cin >> x >> y;
		xCount[x]++;
		yCount[y]++;
	}

	for (map<int, int>::iterator it = xCount.begin(); it != xCount.end(); it++)
	{
		if (it->second == 1)
			xPos = it->first;
	}

	for (map<int, int>::iterator it = yCount.begin(); it != yCount.end(); it++)
	{
		if (it->second == 1)
			yPos = it->first;
	}

	cout << xPos << ' ' << yPos;
}