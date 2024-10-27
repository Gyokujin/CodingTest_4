#include <iostream>
using namespace std;

int main()
{
	int pieces[6] = { 1, 1, 2, 2, 2, 8 };
	int numbers[6];

	for (int i = 0; i < 6; i++)
	{
		cin >> numbers[i];
	}

	for (int i = 0; i < 6; i++)
	{
		cout << pieces[i] - numbers[i] << " ";
	}
}