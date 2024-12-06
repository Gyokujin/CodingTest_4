#include <string>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string numbers;
		cin >> numbers;

		string s1 = numbers.substr(0, 3);
		string s2 = numbers.substr(4, 8);
		
		int number1 = 0;
		int number2 = stoi(s2);

		for (int i = 0; i < s1.size(); i++)
			number1 += (s1[i] - 'A') * pow(26, s1.size() - i - 1);

		cout << (abs(number1 - number2) <= 100 ? "nice" : "not nice") << endl;
	}
}