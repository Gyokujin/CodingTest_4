#include <string>
#include <iostream>
using namespace std;

int quicksum(string &line)
{
	int sum = 0;

	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] != ' ')
			sum += (i + 1) * (line[i] - 'A' + 1);
	}

	return sum;
}

int main()
{
	string input;

	while (true)
	{
		getline(cin, input);

		if (input == "#")
			break;

		cout << quicksum(input) << endl;
	}
}