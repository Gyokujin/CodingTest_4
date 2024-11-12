#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 0;
	int index = 0;
	string word = "666";

	while (true)
	{
		string s = to_string(index);

		if (s.find(word) != string::npos)
		{
			count++;

			if (count == N)
				break;
		}

		index++;
	}

	cout << index;
}