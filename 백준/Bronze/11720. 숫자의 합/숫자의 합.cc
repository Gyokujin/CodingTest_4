#include <iostream>
using namespace std;

int main()
{
	int correct = 0;
	int N;
	string input;

	cin >> N;
	cin >> input;

	for (int i = 0; i < N; i++)
	{
		correct += input[i] - 48;
	}

	cout << correct;
}