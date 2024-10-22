#include <iostream>
using namespace std;

int main()
{
	int T, R;
	string S;
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> R >> S;

		for (int j = 0; j < S.size(); j++)
		{
			char c = S[j];

			for (int k = 0; k < R; k++)
			{
				cout << c;
			}
		}

		cout << endl;
	}
}