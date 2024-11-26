#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int numbers[4];
		cin >> numbers[0] >> numbers[1] >> numbers[2];

		if (numbers[0] == 0 && numbers[1] == 0 && numbers[2] == 0)
			break;

		if (numbers[1] - numbers[0] == numbers[2] - numbers[1]) // 등차수열
		{
			cout << "AP ";
			numbers[3] = numbers[2] + (numbers[2] - numbers[1]);
		}
		else // 등비수열
		{
			cout << "GP ";
			numbers[3] = numbers[2] * (numbers[2] / numbers[1]);
		}

		cout << numbers[3] << endl;
	}
}