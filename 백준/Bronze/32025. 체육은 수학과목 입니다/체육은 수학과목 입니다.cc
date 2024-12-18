#include <iostream>
using namespace std;

int main()
{
	int H, W;
	cin >> H;
	cin >> W;

	int answer = min(H, W) * 100 / 2;
	cout << answer;
}