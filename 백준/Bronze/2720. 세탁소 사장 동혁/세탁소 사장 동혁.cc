#include <vector>
#include <iostream>
using namespace std;

vector<int> cashCalculation(int cash)
{
	vector<int> cashs(4);

	// 쿼터(0.25)
	cashs[0] = cash / 25;
	cash -= 25 * cashs[0];

	// 다임(0.1)
	cashs[1] = cash / 10;
	cash -= 10 * cashs[1];

	// 니켈(0.05)
	cashs[2] = cash / 5;
	cash -= 5 * cashs[2];

	// 페니(0.01)
	cashs[3] = cash;

	return cashs;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int C;
		cin >> C;
		
		vector<int> cashCounts = cashCalculation(C);
		
		for (int count : cashCounts)
			cout << count << ' ';

		cout << endl;
	}
}