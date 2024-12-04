#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string password;
		cin >> password;

		if (password.size() >= 6 && password.size() <= 9)
			cout << "yes";
		else
			cout << "no";
		
		cout << endl;
	}
}