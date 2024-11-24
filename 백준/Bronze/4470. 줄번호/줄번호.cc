#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	cin.ignore();

	vector<string> names(N);

	for (int i = 0; i < names.size(); i++)
		getline(cin, names[i]);

	for (int i = 0; i < names.size(); i++)
		cout << i + 1 << ". " << names[i] << endl;
}