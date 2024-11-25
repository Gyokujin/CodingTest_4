#include <vector>
#include <numeric>
#include <iostream>
using namespace std;

int main()
{
	vector<int> times(4);
	
	for (int i = 0; i < times.size(); i++)
		cin >> times[i];

	int sum = accumulate(times.begin(), times.end(), 0);
	cout << sum / 60 << endl << sum % 60;
}