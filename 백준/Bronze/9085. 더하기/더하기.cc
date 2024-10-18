#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int T;
		cin >> T;

		int num;
		int sum = 0;

		for (int j = 0; j < T; j++)
		{
			cin >> num;
			sum += num;
		}

		cout << sum << endl;
	}
}