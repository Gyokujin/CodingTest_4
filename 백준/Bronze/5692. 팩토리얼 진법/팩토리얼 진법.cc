#include <string>
#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n <= 1)
		return 1;

	return n * factorial(n - 1);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	while (true)
	{
		int input;
		cin >> input;

		if (input == 0)
			break;

		string sInput = to_string(input);
		int sum = 0;

		for (int i = 0; i < sInput.size(); i++)
		{
			int num1 = int(sInput[i]) - 48;
			int num2 = factorial(sInput.size() - i);
			sum += num1 * num2;
		}

		cout << sum << "\n";
	}
}