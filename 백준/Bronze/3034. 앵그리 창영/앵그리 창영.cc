#include <iostream>
using namespace std;

int main()
{
	int N, W, H;
	cin >> N >> W >> H;
	int size = W * W + H * H; // 최대 크기로 대각선의 길이와 같다

	for (int i = 0; i < N; i++)
	{
		int length;
		cin >> length;
		cout << (size >= length * length ? "DA" : "NE") << endl;
	}
}