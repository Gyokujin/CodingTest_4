#include <iostream>
using namespace std;

int main()
{
	int W, H;
	cin >> W >> H;
	float answer = (float)W * H / 2;
	printf("%.1f", answer);
}