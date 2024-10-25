#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
	{
		string sentence;
		getline(cin, sentence);

		if ((int)sentence[0] >= 97 && (int)sentence[0] <= 122) // A ~ Z
			sentence[0] = char((int)sentence[0] - 32); // 대문자와 소문자의 차는 32

		cout << sentence << endl;
	}
}