#include <string>
#include <iostream>
using namespace std;

int main()
{
	string words[3];
	int numbers[3];

	for (int i = 0; i < 3; i++)
		cin >> words[i];

	if (isdigit(words[0][0]) != 0) // 첫번째 요소가 숫자인 경우
	{
		numbers[0] = stoi(words[0]);
		numbers[1] = numbers[0] + 1;
		numbers[2] = numbers[1] + 1;
	}
	else if (isdigit(words[1][0]) != 0) // 두번째 요소가 숫자인 경우
	{
		numbers[1] = stoi(words[1]);
		numbers[0] = numbers[1] - 1;
		numbers[2] = numbers[1] + 1;
	}
	else if (isdigit(words[2][0]) != 0) // 세번째 요소가 숫자인 경우
	{
		numbers[2] = stoi(words[2]);
		numbers[1] = numbers[2] - 1;
		numbers[0] = numbers[1] - 1;
	}

	int next = numbers[2] + 1;

	if (next % 3 == 0 && next % 5 == 0)
		cout << "FizzBuzz";
	else if (next % 3 == 0 && next % 5 != 0)
		cout << "Fizz";
	else if (next % 3 != 0 && next % 5 == 0)
		cout << "Buzz";
	else
		cout << next;
}