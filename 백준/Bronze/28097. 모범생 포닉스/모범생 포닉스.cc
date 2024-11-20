#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> times(N);

	for (int i = 0; i < times.size(); i++)
		cin >> times[i];

	int sum = times[0];

	for (int i = 1; i < times.size(); i++)
		sum += times[i] + 8;

	cout << sum / 24 << ' ' << sum % 24;
}