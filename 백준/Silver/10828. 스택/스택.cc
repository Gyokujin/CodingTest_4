#include <stack>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	stack<int> numbers;

	for (int i = 0; i <= N; i++)
	{
		string command;
		getline(cin, command);

		if (command.find("push") != string::npos)
		{
			int number = stoi(command.substr(5, command.size()));
			numbers.push(number);
		}
		else if (command == "pop")
		{
			if (!numbers.empty())
			{
				cout << numbers.top() << endl;
				numbers.pop();
			}
			else
				cout << -1 << endl;
		}
		else if (command == "size")
			cout << numbers.size() << endl;
		else if (command == "empty")
			cout << (numbers.empty() ? 1 : 0) << endl;
		else if (command == "top")
			cout << (!numbers.empty() ? numbers.top() : -1) << endl;
	}
}