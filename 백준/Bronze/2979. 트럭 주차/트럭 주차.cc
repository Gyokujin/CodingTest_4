#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	int truck1[2];
	int truck2[2];
	int truck3[2];
	
	cin >> A >> B >> C;
	cin >> truck1[0] >> truck1[1];
	cin >> truck2[0] >> truck2[1];
	cin >> truck3[0] >> truck3[1];
	
	int maxIndex = max(max(truck1[1], truck2[1]), truck3[1]);
	int price = 0;

	for (int i = 0; i < maxIndex; i++)
	{
		int count = 0;
		
		if (i >= truck1[0] && i < truck1[1])
			count++;

		if (i >= truck2[0] && i < truck2[1])
			count++;

		if (i >= truck3[0] && i < truck3[1])
			count++;

		switch (count)
		{
			case 1:
				price += A;
				break;

			case 2:
				price += B * 2;
				break;

			case 3:
				price += C * 3;
				break;
		}
	}

	cout << price;
}