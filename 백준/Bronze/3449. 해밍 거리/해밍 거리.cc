#include <iostream>
using namespace std;

int hammingDistance(string &numA, string &numB)
{
	int count = 0;

	for (int i = 0; i < numA.size(); i++)
		count += (numA[i] != numB[i] ? 1 : 0);

	return count;
}

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		string inputA, inputB;
		cin >> inputA;
		cin >> inputB;

		int answer = hammingDistance(inputA, inputB);
		cout << "Hamming distance is " << answer << "." << endl;
	}
}