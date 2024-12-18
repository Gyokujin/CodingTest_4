#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cout << fixed;
	cout.precision(6);

	int N;
	cin >> N;

	int potion;
	double curValue = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> potion;
		curValue = curValue + potion - (curValue * (potion / 100.0));
		cout << curValue << "\n";
	}
}