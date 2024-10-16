#include <iostream>
using namespace std;

int main()
{
	int input;
	int answer = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		answer += input;
	}

	cout << answer;
}