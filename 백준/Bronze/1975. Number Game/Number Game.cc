#include <iostream>
using namespace std;

void binaryCount(int & num)
{
	int index = 0;
	int curNum = num;

	for (int i = 2; i <= num; i++)
	{
		curNum = num;

		while (true)
		{
			if (curNum % i != 0)
				break;

			index++;
			curNum /= i;
		}
	}

	cout << index << "\n";
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;
		binaryCount(N);
	}
}