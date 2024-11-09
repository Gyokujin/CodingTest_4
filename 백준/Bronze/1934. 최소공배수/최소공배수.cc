#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int A, B;
		cin >> A >> B;
		
		int count = 1;
		int maxNum = max(A, B);
		int minNum = min(A, B);

		while (true)
		{
			int curNum = maxNum * count;

			if (curNum % minNum == 0)
			{
				cout << curNum << endl;
				break;
			}

			count++;
		}
	}
}