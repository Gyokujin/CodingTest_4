#include <iostream>
using namespace std;

int main()
{
	int N;
	string before, after;
	cin >> N >> before >> after;

	if (N % 2 != 0) 
	{
		for (int i = 0; i < before.size(); i++)
			before[i] = before[i] == '0' ? '1' : '0';
	}

	cout << (before == after ? "Deletion succeeded" : "Deletion failed");
}