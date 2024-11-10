#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		vector<int> numbers(3);
		
		for (int i = 0; i < numbers.size(); i++)
			cin >> numbers[i];

		if (numbers[0] == 0 && numbers[1] == 0 && numbers[2] == 0)
			break;
		else
		{
			sort(numbers.begin(), numbers.end());

			if (numbers[0] + numbers[1] <= numbers[2]) // 삼각형의 조건을 만족하지 못하는 경우
				cout << "Invalid" << endl;
			else
			{
				if (numbers[0] == numbers[2]) // 세 변이 모두 같은 경우
					cout << "Equilateral" << endl;
				else if (numbers[0] == numbers[1] || numbers[1] == numbers[2]) // 두 변의 길이만 같은 경우
					cout << "Isosceles" << endl;
				else
					cout << "Scalene" << endl;
			}
		}
	}
}