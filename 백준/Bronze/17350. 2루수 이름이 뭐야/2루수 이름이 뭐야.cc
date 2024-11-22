#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> names(N);

	for (int i = 0; i < names.size(); i++)
		cin >> names[i];

	if (find(names.begin(), names.end(), "anj") != names.end())
		cout << "뭐야;";
	else
		cout << "뭐야?";
}