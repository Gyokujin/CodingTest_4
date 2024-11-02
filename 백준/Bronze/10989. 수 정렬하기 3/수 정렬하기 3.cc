#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int numbers[10001] = { 0 };
	int N, input;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		numbers[input]++;
	}

	for (int i = 1; i < 10001; i++)
	{
		for (int j = 0; j < numbers[i]; j++)
			cout << i << "\n";
	}
}