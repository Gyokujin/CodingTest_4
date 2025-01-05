#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	bool lines[10001] = { false };
	int N, start, end;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> start >> end;

		for (int j = start; j < end; j++)
			lines[j] = true;
	}

	for (int i = 1; i < 10001; i++)
	{
		if (lines[i])
			answer++;
	}

	cout << answer;
}