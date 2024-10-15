#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N, X, number;
	cin >> N >> X;

	vector<int> A;

	for (int i = 0; i < N; i++)
	{
		cin >> number;

		if (X > number)
			A.push_back(number);
	}

	for (int num : A)
		cout << num << ' ';
}