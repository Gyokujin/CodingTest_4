#include <iostream>
using namespace std;

int main()
{
	int index;
	int answer = 0;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		int num;
		cin >> num;
		answer += num;

		if (i > 0)
			answer--;
	}

	cout << answer;
}