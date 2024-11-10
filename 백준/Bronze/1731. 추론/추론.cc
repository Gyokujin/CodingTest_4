#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> numbers(N);

	for (int i = 0; i < N; i++)
		cin >> numbers[i];

	if (numbers[2] - numbers[1] == numbers[1] - numbers[0]) // 등차수열
		cout << numbers[N - 1] + (numbers[1] - numbers[0]); // 수열의 마지막 값에서 등차를 더한값
	else // 등비수열
		cout << numbers[N - 1] * (numbers[1] / numbers[0]); // 수열의 마지막 값에서 등비를 곱한값
}