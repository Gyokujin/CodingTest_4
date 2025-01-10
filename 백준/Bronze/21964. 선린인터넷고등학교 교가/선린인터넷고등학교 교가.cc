#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	string S;
	cin >> S;

	cout << S.substr(S.size() - 5);
}