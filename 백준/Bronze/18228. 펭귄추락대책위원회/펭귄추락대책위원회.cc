#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> ices(N);

	for (int i = 0; i < ices.size(); i++)
		cin >> ices[i];

	int location = find(ices.begin(), ices.end(), -1) - ices.begin(); // 현재 펭귄이 밟은 위치
	int left = 0;
	int right = 0;

	for (int i = 0; i < location; i++) // 펭귄 기준 왼쪽에 있는 얼음중 가장 낮은 값의 얼음을 찾는다.
	{
		if (left == 0 || ices[i] < left)
			left = ices[i];
	}

	for (int i = location + 1; i < ices.size(); i++) // 펭귄 기준 오른쪽 있는 얼음중 가장 낮은 값의 얼음을 찾는다.
	{
		if (right == 0 || ices[i] < right)
			right = ices[i];
	}

	cout << left + right; // 왼쪽 얼음을 깨는데 필요한 힘 + 오른쪽 얼음을 깨는데 필요한 힘
}