#include <iostream>
using namespace std;

int main()
{
	int answer = 0;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int student = 0;
		int apple = 0;

		cin >> student >> apple;
		answer += apple % student;
	}

	cout << answer;
}