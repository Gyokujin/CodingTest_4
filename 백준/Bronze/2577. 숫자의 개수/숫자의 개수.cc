#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main()
{	
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	string mul = to_string(num1 * num2 * num3);
	vector<int> alphabets(10, 0);

	for (char c : mul)
		alphabets[(int)c - 48]++;

	for (int num : alphabets)
		cout << num << endl;
}