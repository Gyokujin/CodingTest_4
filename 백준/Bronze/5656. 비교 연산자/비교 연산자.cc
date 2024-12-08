#include <iostream>
using namespace std;

int main()
{
	int count = 1;

	while (true)
	{
		int num1, num2;
		string oper;
		cin >> num1 >> oper >> num2;
		
		if (oper == "E")
			break;
		else if (oper == ">")
			cout << "Case " << count << ": " << (num1 > num2 ? "true" : "false") << endl;
		else if (oper == ">=")
			cout << "Case " << count << ": " << (num1 >= num2 ? "true" : "false") << endl;
		else if (oper == "<")
			cout << "Case " << count << ": " << (num1 < num2 ? "true" : "false") << endl;
		else if (oper == "<=")
			cout << "Case " << count << ": " << (num1 <= num2 ? "true" : "false") << endl;
		else if (oper == "==")
			cout << "Case " << count << ": " << (num1 == num2 ? "true" : "false") << endl;
		else if (oper == "!=")
			cout << "Case " << count << ": " << (num1 != num2 ? "true" : "false") << endl;

		count++;
	}
}