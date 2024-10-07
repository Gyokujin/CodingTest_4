#include <iostream>
using namespace std;

int main()
{
	int index, numA, numB;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		cin >> numA >> numB;
		cout << "Case #" << i + 1 << ": " << numA << " + " << numB << " = " << numA + numB << endl;
	}
}