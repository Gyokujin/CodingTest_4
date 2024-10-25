#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		vector<int> numbers;
		
		for (int i = 0; i < 10; i++)
		{
			int num;
			cin >> num;
			numbers.push_back(num);
		}

		sort(numbers.begin(), numbers.end());
		cout << *(numbers.end() - 3) << endl;
	}
}