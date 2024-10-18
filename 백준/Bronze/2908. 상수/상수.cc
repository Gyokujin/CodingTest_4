#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{	
	int num1, num2;
	cin >> num1 >> num2;

	string word1 = to_string(num1);
	reverse(word1.begin(), word1.end());
	num1 = stoi(word1);

	string word2 = to_string(num2);
	reverse(word2.begin(), word2.end());
	num2 = stoi(word2);

	cout << max(num1, num2);
}