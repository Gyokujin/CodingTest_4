#include <iostream>
using namespace std;

int main()
{	
	int sumPoint = 0;
	int curPoint = 1;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
			curPoint = 1;
		else
		{
			sumPoint += curPoint;
			curPoint++;
		}
	}

	cout << sumPoint;
}