#include <iostream>
using namespace std;

int main()
{
	int N, T, P;
	int tshirtOrder[6];

	cin >> N;

	for (int i = 0; i < 6; i++)
		cin >> tshirtOrder[i];

	cin >> T >> P;

	int outTshirt = 0;

	for (int num : tshirtOrder)
	{
		if (num % T == 0)
			outTshirt += num / T;
		else
			outTshirt += num / T + 1;
	}

	cout << outTshirt << endl;
	cout << N / P << ' ' << N % P;
}