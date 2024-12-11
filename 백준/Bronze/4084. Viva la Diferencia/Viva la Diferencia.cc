#include <vector>
#include <iostream>
using namespace std;

vector<int> calculator(vector<int> _numbers)
{
	vector<int> numbers = { abs(_numbers[0] - _numbers[1]), abs(_numbers[1] - _numbers[2]), abs(_numbers[2] - _numbers[3]), abs(_numbers[3] - _numbers[0]) };
	return numbers;
}

int main()
{
	while (true)
	{
		vector<int> numbers(4);

		for (int i = 0; i < 4; i++)
			cin >> numbers[i];
		
		if (numbers[0] == 0 && numbers[1] == 0 && numbers[2] == 0 && numbers[3] == 0)
			break;

		int count = 0;

		while (true)
		{
			if (numbers[0] == numbers[1] && numbers[1] == numbers[2] && numbers[2] == numbers[3])
				break;

			numbers = calculator(numbers);
			count++;
		}

		cout << count << endl;
	}
}