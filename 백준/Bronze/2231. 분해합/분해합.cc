#include <string>
#include <iostream>
using namespace std;

int findStartNum(int num)
{
	int start = num - to_string(num).size() * 9;
	return start;
}

int main()
{
	int N;
	cin >> N;

	int answer = 0;
	int startNum = findStartNum(N);

	for (int i = startNum; i < N; i++)
	{
		int sum = i;
		string sNum = to_string(i);

		for (int j = 0; j < sNum.size(); j++)
			sum += int(sNum[j]) - 48;

		if (sum == N)
		{
			answer = i;
			break;
		}
	}

	cout << answer;
}