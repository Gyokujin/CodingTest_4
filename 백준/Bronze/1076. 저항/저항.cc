#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> colorResistance = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };

int main()
{
	string inputColors[3];
	cin >> inputColors[0] >> inputColors[1] >> inputColors[2];

	int value1 = 0;
	int value2 = 0;
	long long mul = 0;

	for (int i = 0; i < inputColors->size(); i++)
	{
		vector<string>::iterator it = find(colorResistance.begin(), colorResistance.end(), inputColors[i]);
		int dis = distance(colorResistance.begin(), it);

		switch (i)
		{
			case 0:
				value1 = dis;
				break;
			case 1:
				value2 = dis;
				break;
			case 2:
				mul = pow(10, dis);
				break;
		}
	}

	int sumValue = stoi(to_string(value1) + to_string(value2));
	cout << sumValue * mul;
}