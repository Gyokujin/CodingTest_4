#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 0; j < N * 2; j++)
			{
				if (j % 2 != 0)
					cout << '*';
				else
					cout << ' ';
			}
		}
		else
		{
			for (int j = 0; j < N * 2; j++)
			{
				if (j % 2 != 0)
					cout << ' ';
				else
					cout << '*';
			}
		}

		cout << endl;
	}
}