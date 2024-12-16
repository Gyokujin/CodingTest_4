#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string input;
		cin >> input;

		if (input[input.size() / 2 - 1] == input[input.size() / 2])
			cout << "Do-it";
		else
			cout << "Do-it-Not";

		cout << endl;
	}
}