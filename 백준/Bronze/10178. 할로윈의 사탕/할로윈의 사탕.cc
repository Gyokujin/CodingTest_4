#include <iostream>
using namespace std;

int main()
{
	int index, c, v;
	cin >> index;

	for (int i = 0; i < index; i++)
	{
		cin >> c >> v;
		cout << "You get " << c / v << " piece(s) and your dad gets " << c % v << " piece(s)." << endl;
	}
}