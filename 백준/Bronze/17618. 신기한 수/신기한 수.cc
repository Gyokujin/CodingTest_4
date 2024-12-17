#include <string>
#include <iostream>
using namespace std;

bool amazingNumber(int &num)
{
	string numS = to_string(num);
	int sum = 0;

	for (char c : numS)
		sum += int(c) - 48;

	return num % sum == 0;
}


int main()
{
	int answer = 0;
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		if (amazingNumber(i))
			answer++;
	}

	cout << answer;
}