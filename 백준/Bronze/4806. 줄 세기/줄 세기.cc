#include <string>
#include <iostream>
using namespace std;

int main()
{
	string input;
	int count = 0;

	while (getline(cin, input))
		count++;

	cout << count;
}