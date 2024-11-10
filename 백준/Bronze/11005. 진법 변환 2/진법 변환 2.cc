#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string answer = "";
	int N, B;
	cin >> N >> B;

	while (N > 0)
	{
		if (N % B < 10)
			answer += (char)(N % B + 48);
		else
			answer += (char)(N % B - 10 + 65);
		N /= B;
	}

	reverse(answer.begin(), answer.end());
	cout << answer;
}