#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	long long answer = 0;
	string N;
	int B;
	cin >> N >> B;

	for (int i = 0; i < N.size(); i++)
	{
		int num = 0;

		if (N[i] >= '0' && N[i] <= '9')
			num = N[i] - '0';
		else
			num = N[i] - 'A' + 10;
		
		answer += num * pow(B, N.size() - i - 1);
	}

	cout << answer << endl;
}