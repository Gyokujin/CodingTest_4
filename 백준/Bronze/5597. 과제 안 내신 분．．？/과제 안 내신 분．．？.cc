#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> students(30);
	vector<int> absence(2);
	int input;

	for (int i = 0; i < 28; i++)
	{
		cin >> input;
		students[input - 1]++;
	}

	for (int i = 0; i < students.size(); i++)
	{
		if (students[i] == 0)
		{
			cout << i + 1 << endl;
		}
	}
}