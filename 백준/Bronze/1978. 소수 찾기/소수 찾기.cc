#include <iostream>
using namespace std;

int main()
{
	int count = 0;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int curNum;
		cin >> curNum;

		if (curNum < 2)
			continue;

		bool isAble = true;

		for (int j = 2; j < curNum; j++)
		{
			if (curNum % j == 0)
			{
				isAble = false;
				break;
			}
		}

		if (isAble)
			count++;
	}

	cout << count;
}