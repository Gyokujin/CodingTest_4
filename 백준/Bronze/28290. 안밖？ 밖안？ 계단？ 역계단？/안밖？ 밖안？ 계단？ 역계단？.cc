#include <iostream>
using namespace std;

string hittingCheck(string &word)
{
	string hitting = "molu";

	if (word == "fdsajkl;" || word == "jkl;fdsa")
		hitting = "in-out";
	else if (word == "asdf;lkj" || word == ";lkjasdf")
		hitting = "out-in";
	else if (word == "asdfjkl;")
		hitting = "stairs";
	else if (word == ";lkjfdsa")
		hitting = "reverse";

	return hitting;
}

int main()
{
	string S;
	cin >> S;
	cout << hittingCheck(S);
}