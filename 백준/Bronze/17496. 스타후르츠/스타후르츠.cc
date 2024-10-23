#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N, T, C, P;
	cin >> N >> T >> C >> P;

	vector<int> garden(C, 0);
	int money = 0;

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < C; j++)
		{
			garden[j]++;

			if (garden[j] == T)
			{
				money += P;
				garden[j] = 0;
			}
		}
	}

	cout << money;
}