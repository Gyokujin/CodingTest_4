#include <map>
#include <iostream>
using namespace std;

int main()
{
	string music;
	cin >> music;

	map<char, int> sounds;
	sounds[music[0]]++;

	for (int i = 0; i < music.size(); i++)
	{
		if (music[i] == '|')
			sounds[music[i + 1]]++;
	}

	bool isA = true;

	if (sounds['A'] + sounds['D'] + sounds['E'] == sounds['C'] + sounds['F'] + sounds['G'])
	{
		char last = music[music.size() - 1];

		switch (last)
		{
			case 'A':
			case 'D':
			case 'E':
				isA = true;
				break;

			case 'C':
			case 'F':
			case 'G':
				isA = false;
				break;
		}
	}
	else if (sounds['A'] + sounds['D'] + sounds['E'] > sounds['C'] + sounds['F'] + sounds['G'])
		isA = true;
	else
		isA = false;

	cout << (isA ? "A-minor" : "C-major");
}