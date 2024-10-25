#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	vector<int> dwarfs;
	int overHeight = -100;

	for (int i = 0; i < 9; i++)
	{
		int height;
		cin >> height;
		dwarfs.push_back(height);
		overHeight += height;
	}

	sort(dwarfs.begin(), dwarfs.end());

	for (int i = 0; i < dwarfs.size() - 1; i++)
	{
		bool isFind = false;

		for (int j = i + 1; j < dwarfs.size(); j++)
		{
			if (dwarfs[i] + dwarfs[j] == overHeight)
			{
				isFind = true;
				dwarfs.erase(dwarfs.begin() + j); // i보다 더 뒤에 있는 j부터 먼저 지운다.
				dwarfs.erase(dwarfs.begin() + i);
				break;
			}
		}

		if (isFind)
			break;
	}

	for (int num : dwarfs)
		cout << num << endl;

	return 0;
}