#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	int num1, num2, num3;
	cin >> N >> M;
	vector<int> numbers(N);

	for (int i = 0; i < M; i++)
	{
		cin >> num1 >> num2 >> num3;

		for (int a = num1 - 1; a < num2; a++) 
		{
			numbers[a] = num3;
		}
	}

	for (int num : numbers)
	{
		cout << num << " ";
	}
}