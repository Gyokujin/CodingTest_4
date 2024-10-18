#include <iostream>
using namespace std;

int main()
{	
	int correct = 0;
	int day, carNum;
	cin >> day;

	for (int i = 0; i < 5; i++)
	{
		cin >> carNum;
		
		if (carNum == day)
			correct++;
	}

	cout << correct;
}