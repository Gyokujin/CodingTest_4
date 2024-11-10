#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	string input;
	cin >> input;

	for (int i = 0; i < input.size() - 3; i++)
	{
		if (input.substr(i, 4) == "DKSH")
			answer++;
	}

	cout << answer;
}