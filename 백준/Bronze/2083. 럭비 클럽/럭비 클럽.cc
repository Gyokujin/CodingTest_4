#include <string>
#include <iostream>
using namespace std;

void classification(string &input)
{
	string name = input.substr(0, input.find(' '));
	int age = stoi(input.substr(input.find(' '), input.rfind(' ')));
	int weight = stoi(input.substr(input.rfind(' ')));

	cout << name << ' ';
	cout << (age > 17 || weight >= 80 ? "Senior" : "Junior") << endl;
}

int main()
{
	string input;

	while (true)
	{
		getline(cin, input);

		if (input == "# 0 0")
			break;

		classification(input);
	}
}