#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> minusTime(vector<int> t1, vector<int> t2)
{
	t2[2] -= t1[2];
	
	if (t2[2] < 0)
	{
		t2[2] += 60;
		t2[1]--;
	}

	t2[1] -= t1[1];

	if (t2[1] < 0)
	{
		t2[1] += 60;
		t2[0]--;
	}

	t2[0] -= t1[0];

	if (t2[0] < 0)
		t2[0] += 24;

	return t2;
}

int main()
{
	vector<int> time1, time2, calTime;
	string input;
	cin >> input;

	for (int i = 0; i < input.size(); i = i + 3)
		time1.push_back(stoi(input.substr(i, 2)));

	cin >> input;

	for (int i = 0; i < input.size(); i = i + 3)
		time2.push_back(stoi(input.substr(i, 2)));

	calTime = minusTime(time1, time2);
	printf("%02d:%02d:%02d", calTime[0], calTime[1], calTime[2]);
}