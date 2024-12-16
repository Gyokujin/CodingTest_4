#include <vector>
#include <iostream>
using namespace std;

void operationCheck(int &num1, int& num2, int& num3)
{
	if (num1 + num2 == num3) // 등호가 우측일 경우
		cout << num1 << "+" << num2 << "=" << num3;
	else if (num1 - num2 == num3)
		cout << num1 << "-" << num2 << "=" << num3;
	else if (num1 * num2 == num3)
		cout << num1 << "*" << num2 << "=" << num3;
	else if (num1 / num2 == num3)
		cout << num1 << "/" << num2 << "=" << num3;
	else if (num1 == num2 + num3) // 등호가 좌측일 경우
		cout << num1 << "=" << num2 << "+" << num3;
	else if (num1 == num2 - num3)
		cout << num1 << "=" << num2 << "-" << num3;
	else if (num1 == num2 * num3)
		cout << num1 << "=" << num2 << "*" << num3;
	else if (num1 == num2 / num3)
		cout << num1 << "=" << num2 << "/" << num3;
}

int main()
{
	vector<int> numbers(3);
	
	for (int i = 0; i < numbers.size(); i++)
		cin >> numbers[i];

	operationCheck(numbers[0], numbers[1], numbers[2]);
}