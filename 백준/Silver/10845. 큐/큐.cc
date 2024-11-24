#include <string>
#include <queue>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string command;

	int number;
	queue<int> numbers;

	for (int i = 0; i <= N; i++)
	{
		getline(cin, command);

		if (command.find("push") != string::npos)
		{
			number = stoi(command.substr(5, command.size()));
			numbers.push(number);
		}
		else if (command == "pop")
		{
			if (!numbers.empty())
			{
				cout << numbers.front() << "\n";
				numbers.pop();
			}
			else
				cout << -1 << "\n";
		}
		else if (command == "size")
			cout << numbers.size() << "\n";
		else if (command == "empty")
			cout << (numbers.empty() ? 1 : 0) << "\n";
		else if (command == "front")
			cout << (!numbers.empty() ? numbers.front() : -1) << "\n";
		else if (command == "back")
			cout << (!numbers.empty() ? numbers.back() : -1) << "\n";
	}
}