#include <iostream>
#include <set>
using namespace std;

int main()
{
	int answer;
	int num1, num2, num3;	
	cin >> num1 >> num2 >> num3;
	set<int> numbers;
	int sameNum = 0;

	numbers.insert(num1);
	numbers.insert(num2);
	numbers.insert(num3);

	switch (numbers.size())
	{
		case 1:
			answer = 10000 + *numbers.begin() * 1000;
			break;
		
		case 2:
			sameNum = num1 == num2 || num1 == num3 ? num1 : num3;
			answer = 1000 + sameNum * 100;
			break;

		case 3:
			answer = *numbers.rbegin() * 100;
			break;
	}

	cout << answer;
}