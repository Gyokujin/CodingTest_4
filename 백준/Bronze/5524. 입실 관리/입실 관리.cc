#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		string word;
		cin >> word;
		
		for (char c : word)
			cout << (char)tolower(c);

		cout << endl;
	}
}