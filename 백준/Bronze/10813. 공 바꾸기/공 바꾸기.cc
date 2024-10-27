#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	int num1, num2;
	cin >> N >> M;
	vector<int> numbers(N);

	for (int i = 0; i < numbers.size(); i++)
	{
		numbers[i] = i + 1;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> num1 >> num2;
		int temp = numbers[num1 - 1];

		numbers[num1 - 1] = numbers[num2 - 1];
		numbers[num2 - 1] = temp;
	}

	for (int num : numbers)
	{
		cout << num << " ";
	}
}