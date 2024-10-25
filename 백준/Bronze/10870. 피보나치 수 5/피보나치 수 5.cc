#include <iostream>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int answer = 0;
	int num1 = 0;
	int num2 = 1;

	if (n == 0)
		cout << 0;
	else if (n == 1)
		cout << 1;
	else
	{
		for (int i = 0; i < n - 1; i++)
		{
			answer = num1 + num2;
			num1 = num2;
			num2 = answer;
		}

		cout << answer;
	}
}