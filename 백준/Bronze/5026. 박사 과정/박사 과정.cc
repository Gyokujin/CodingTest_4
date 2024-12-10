#include <string>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	string question;

	for (int i = 0; i < N; i++)
	{
		cin >> question;

		if (question == "P=NP")
			cout << "skipped";
		else
		{
			int operIndex = question.find('+');
			int num1 = stoi(question.substr(0, operIndex));
			int num2 = stoi(question.substr(operIndex + 1));
			cout << num1 + num2;
		}

		cout << endl;
	}
}