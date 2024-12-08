#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		string input;
		cin >> input;

		int curCount = 1;
		int answer = 1;

		for (int j = 0; j < input.size() - 1; j++)
		{
			if (input[j] == input[j + 1])
			{
				curCount++;
				answer = max(curCount, answer);
			}
			else
				curCount = 1;
		}

		cout << answer << endl;
	}
}