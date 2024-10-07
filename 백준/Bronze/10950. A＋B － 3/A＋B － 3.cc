#include <iostream>
using namespace std;

int main()
{
	int index;
	int inputA, inputB;

	cin >> index;

	for (int i = 0; i < index; i++)
	{
		cin >> inputA >> inputB;
		cout << inputA + inputB << endl;
	}
}