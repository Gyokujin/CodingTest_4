#include <iostream>
using namespace std;

int main()
{
	int N;
	int count = 2;
	cin >> N;

	for (int i = 0; i < N; i++)
		count = count * 2 - 1;

	cout << count * count;
}