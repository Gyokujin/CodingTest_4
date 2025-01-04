#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	n %= 8;

	switch (n)
	{
		case 1: // 엄지
			cout << 1;
			break;

		case 0: // 검지
		case 2:
			cout << 2;
			break;

		case 3: // 중지
		case 7:
			cout << 3;
			break;

		case 4: // 약지
		case 6:
			cout << 4;
			break;

		case 5: // 새끼손가락
			cout << 5;
			break;
	}
}