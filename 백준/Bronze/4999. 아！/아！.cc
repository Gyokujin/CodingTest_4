#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	string answer;
	string request;
	cin >> answer >> request;

	cout << (answer.find(request) != string::npos ? "go" : "no");
}