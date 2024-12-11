#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> createMulTable(int num, int end)
{
	vector<int> mulTable(end);

	for (int i = 0; i < end; i++)
		mulTable[i] = num * (i + 1);

	return mulTable;
}

vector<int> reverseMulTable(vector<int> mulTable)
{
	for (int i = 0; i < mulTable.size(); i++)
	{
		string sNum = to_string(mulTable[i]);
		reverse(sNum.begin(), sNum.end());
		
		if (sNum[0] == '0') // 앞자리에 0이 있다면 앞쪽의 0을 전부 제거
		{
			int index = sNum.find('0') + 1;
			sNum = sNum.substr(index);
		}

		mulTable[i] = stoi(sNum);
	}

	return mulTable;
}

int main()
{
	int N, K;
	cin >> N >> K;
	
	vector<int> numbers = createMulTable(N, K);
	numbers = reverseMulTable(numbers);
	cout << *max_element(numbers.begin(), numbers.end());
}