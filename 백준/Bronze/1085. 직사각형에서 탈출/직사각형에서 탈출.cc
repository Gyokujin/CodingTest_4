#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	vector<int> lengths = { x, y, w - x, h - y }; // 왼쪽, 아래, 오른쪽, 위
	cout << *min_element(lengths.begin(), lengths.end());
}