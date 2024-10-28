#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int count = 0;
	int index = -1;

	string input;
	cin >> input;

	vector<string> croatian = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

	for (int i = 0; i < croatian.size(); i++)
	{
		while (true)
		{
			index = input.find(croatian[i]);

			if (index == string::npos)
				break;

			input.replace(index, croatian[i].length(), " ");
			count++;
		}
	}

	cout << input.length();
}