#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N, M;
		cin >> N >> M;

		int U = M * 2 - N;
		cout << U << ' ' << M - U << endl;
	}
}