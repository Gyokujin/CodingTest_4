#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string input = "";
	cin >> input;

	if (input.find("0x") != string::npos)
	{
		cout << stoi(input, nullptr, 16);
	}
	else if (input[0] == '0')
	{
		cout << stoi(input, nullptr, 8);
	}
	else
	{
		cout << input;
	}
}