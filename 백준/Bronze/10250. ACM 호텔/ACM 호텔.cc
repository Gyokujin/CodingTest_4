#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int H, W, N;
        cin >> H >> W >> N;

        int curH = (N - 1) % H + 1;
        int curW = (N - 1) / H + 1;
        printf("%d%02d\n", curH, curW);
    }
}