#include <string>
#include <iostream>
using namespace std;

int main()
{
	long long sum = 0;
	int n;
	string word;
	string curNum = "";

	cin >> n;
	cin >> word;

	for (char c : word)
	{
		if (c >= '0' && c <= '9')
			curNum += c;
		else if (curNum != "")
		{
			sum += stoi(curNum);
			curNum = "";
		}
	}

	if (curNum != "")
		sum += stoi(curNum);

	cout << sum;
}