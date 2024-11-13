#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> numbers(n);

	for (int i = 0; i < n; i++)
		cin >> numbers[i];

	for (int i = 0; i < numbers.size(); i++)
	{
		int num = numbers[i];
		int count = 0;
		cout << "Pairs for " << num << ':';

		for (int j = 1; j <= num - 1; j++)
		{
			for (int k = j + 1; k <= num - 1; k++)
			{
				if (num == j + k)
				{
					if (count > 0)
						cout << ',';

					cout << ' ' << j << ' ' << k;
					count++;
				}
			}
		}

		cout << endl;
	}
}