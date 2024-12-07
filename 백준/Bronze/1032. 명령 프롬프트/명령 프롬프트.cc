#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> fileNames(N);

	for (int i = 0; i < N; i++)
		cin >> fileNames[i];

	string answer = fileNames[0];

	for (int i = 0; i < fileNames[0].size(); i++)
	{
		bool isSame = true;

		for (int j = 1; j < fileNames.size(); j++)
		{
			if (fileNames[0][i] != fileNames[j][i])
			{
				isSame = false;
				break;
			}
		}

		if (!isSame)
			answer[i] = '?';
	}

	cout << answer;
}