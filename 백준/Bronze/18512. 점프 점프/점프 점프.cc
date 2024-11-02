#include <iostream>
using namespace std;

int main()
{
	int X, Y, P1, P2;
	cin >> X >> Y >> P1 >> P2;

	int xPos = P1;
	int yPos = P2;

	for (int i = 0; i < 1000; i++)
	{
		if (xPos == yPos)
			break;
		else if (xPos > yPos)
			yPos += Y;
		else
			xPos += X;
	}

	if (xPos == yPos)
		cout << xPos;
	else
		cout << -1;
}