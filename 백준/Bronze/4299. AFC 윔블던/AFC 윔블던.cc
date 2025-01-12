#include <iostream>
using namespace std;

int main()
{
	int x, y, sum, diff;
	cin >> sum >> diff;
	x = (sum + diff) / 2;

	if (sum < diff || sum - x != x - diff)
	{
		cout << -1;
		return 0;
	}

	y = sum - x;
	cout << x << ' ' << y;
}