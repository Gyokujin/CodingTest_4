#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

void magicMirror(vector<string> &mirror, int &state)
{
	switch (state)
	{
		case 1:
			return;

		case 2:
			for (int i = 0; i < mirror.size(); i++)
				reverse(mirror[i].begin(), mirror[i].end());
			break;

		case 3:
			reverse(mirror.begin(), mirror.end());
			break;
	}
}

int main()
{
	int N, K;
	cin >> N;
	vector<string> mirror(N);

	for (int i = 0; i < mirror.size(); i++)
		cin >> mirror[i];

	cin >> K;

	magicMirror(mirror, K);

	for (string word : mirror)
		cout << word << endl;
}