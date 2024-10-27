#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int answer = 0;

	for (int i = 0; i < input.size(); i++)
	{
		int index = ((int)input[i] - 65);
		int time = index / 3 + 3;

		if (input[i] == 'S' || input[i] == 'V' || input[i] == 'Y' || input[i] == 'Z')
			time--;

		answer += time;
	}

	cout << answer;
}