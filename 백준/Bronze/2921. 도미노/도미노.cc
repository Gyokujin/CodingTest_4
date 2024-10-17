#include <iostream>
using namespace std;

int main()
{
	int correct = 0;
	int N;
	cin >> N;

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j <= i; j++)
			correct += i + j;
	}

	cout << correct << endl;
}