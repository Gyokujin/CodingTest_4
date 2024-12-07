#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	int N;
	cin >> N;
	vector<bool> guests(100);

	for (int i = 0; i < N; i++)
	{
		int number;
		cin >> number;

		if (!guests[number])
			guests[number] = true;
		else
			answer++;
	}

	cout << answer;
}