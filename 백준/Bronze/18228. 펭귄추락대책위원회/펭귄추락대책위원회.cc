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
	int left = *min_element(ices.begin(), ices.begin() + location);
	int right = *min_element(ices.begin() + location + 1, ices.end());
	cout << left + right; // 왼쪽 얼음을 깨는데 필요한 힘 + 오른쪽 얼음을 깨는데 필요한 힘
}