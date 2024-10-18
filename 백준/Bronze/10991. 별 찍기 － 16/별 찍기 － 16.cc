#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string line = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
			cout << ' ';

		line += "* ";
		cout << line << endl;
	}
}