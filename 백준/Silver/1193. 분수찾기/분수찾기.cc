#include <iostream>
using namespace std;

int main()
{
	int num1 = 1; // 분자
	int num2 = 1; // 분모
	bool onUp = true; // 분모 증가를 의미

	int X;
	cin >> X;

	for (int i = 0; i < X - 1; i++)
	{
		if (onUp) // 표 기준 오른쪽 위 이동
		{
			num2++;

			if (num1 == 1)
				onUp = false;
			else
				num1--;
		}
		else // 표 기준 왼쪽 아래 이동
		{
			num1++;

			if (num2 == 1)
				onUp = true;
			else
				num2--;
		}
	}

	cout << num1 << '/' << num2 << endl;
}