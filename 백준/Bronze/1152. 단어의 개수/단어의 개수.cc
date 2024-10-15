#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int count = 1;
	getline(cin, input);

	if (input.size() == 1 && input[0] == ' ')
	{
		cout << 0;
	}
	else
	{
		for (int i = 1; i < input.size() - 1; i++)
		{
			if (input[i] == ' ')
				count++;
		}

		cout << count;
	}	
}