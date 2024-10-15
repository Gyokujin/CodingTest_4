#include <iostream>
using namespace std;

int main()
{
	int T = 0;
	cin >> T;
	cout << fixed;
	cout.precision(1);

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		int C = 0;
		int sumC = 0;
		float G = 0;
		float sumG = 0;

		for (int j = 0; j < N; j++)
		{
			cin >> C >> G;
			sumC += C;
			sumG += C * G;
		}

		cout << sumC << ' ' << sumG / sumC << endl;
	}
}