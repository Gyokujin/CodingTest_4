#include <iostream>
using namespace std;

int main()
{	
	int index;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		int n;
		cin >> n;
		string binary = "";

		while (n > 0)
		{
			binary = (n % 2 == 0 ? '0' : '1') + binary;
			n /= 2;
		}
		
		for (int j = 0; j < binary.size(); j++)
		{
			if (binary[binary.size() - j - 1] == '1')
				cout << j << ' ';
		}

		cout << endl;
	}
}