#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int T, N;
	cin >> T;
	cin >> N;

	vector<int> candys(N);
	int sum = 0;

	for (int i = 0; i < candys.size(); i++)
		cin >> candys[i];

	for (int candy : candys)
		sum += candy;

	if (sum >= T)
		cout << "Padaeng_i Happy";
	else
		cout << "Padaeng_i Cry";
}