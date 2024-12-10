#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int num, denom; // 분자와 분모
		cin >> num >> denom;

		if (num == 0 && denom == 0)
			break;

		cout << (num / denom) << ' ' << (num % denom) << " / " << denom << endl;
	}
}