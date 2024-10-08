#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int testIndex = 0;
	cin >> testIndex;

	for (int i = 0; i < testIndex; i++)
	{
		vector<string> playerInfo;
		int playerIndex = 0;
		cin >> playerIndex;
		
		int maxPrice = 0;
		int maxIndex = 0;

		int input1 = 0;
		string input2 = "";

		for (int j = 0; j < playerIndex; j++)
		{
			cin >> input1 >> input2;
			playerInfo.push_back(input2);

			if (maxPrice < input1)
			{
				maxPrice = input1;
				maxIndex = j;
			}
		}

		cout << playerInfo[maxIndex] << endl;
	}
}