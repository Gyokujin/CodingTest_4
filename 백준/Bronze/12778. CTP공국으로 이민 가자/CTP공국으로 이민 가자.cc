#include <iostream>
using namespace std;

int main()
{	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int M;
		char test;
		cin >> M >> test;

		for (int j = 0; j < M; j++)
		{
			if (test == 'C')
			{
				char input;
				cin >> input;
				cout << (int)input - 64 << ' ';
			}
			else if (test == 'N')
			{
				int num;
				cin >> num;
				cout << (char)(num + 64) << ' ';
			}
		}

		cout << endl;
	}
}