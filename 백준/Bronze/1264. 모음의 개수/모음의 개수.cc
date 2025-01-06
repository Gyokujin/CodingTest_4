#include <string>
#include <iostream>
using namespace std;

int main()
{
	string input;
	int count;

	while (true)
	{
		getline(cin, input);

		if (input == "#")
			break;
		
		count = 0;

		for (char c : input)
		{
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
				count++;
		}

		cout << count << endl;
	}
}