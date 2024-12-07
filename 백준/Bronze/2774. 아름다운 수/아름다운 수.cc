#include <set>
#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		set<char> beauties;
		string X;
		cin >> X;

		for (char c : X)
			beauties.insert(c);
		
		cout << beauties.size() << endl;
	}
}