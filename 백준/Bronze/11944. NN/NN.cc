#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	string answer = "";
	string nWord = to_string(N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < nWord.size(); j++)
			answer += nWord[j];

		if (answer.size() >= M)
		{
			answer = answer.substr(0, M);
			break;
		}
	}

	cout << answer;
}