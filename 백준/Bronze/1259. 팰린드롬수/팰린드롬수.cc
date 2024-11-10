#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		bool able = true;
		string input;
		cin >> input;

		if (input == "0")
			break;

		for (int i = 0; i < input.size() / 2; i++)
		{
			if (input[i] != input[input.size() - i - 1])
			{
				able = false;
				break;
			}
		}

		cout << (able ? "yes" : "no") << endl;
	}
}