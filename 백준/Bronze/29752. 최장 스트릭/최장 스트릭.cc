#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int streak = 0;
	int maxStreak = 0;
	vector<int> commits;

	for (int i = 0; i < N; i++)
	{
		int commit;
		cin >> commit;
		commits.push_back(commit);
	}

	for (int i = 0; i < commits.size(); i++)
	{
		if (commits[i] != 0)
		{
			streak++;
			
			if (maxStreak < streak)
				maxStreak = streak;
		}
		else
			streak = 0;
	}

	cout << maxStreak;
}