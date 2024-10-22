#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int curH = 1;
        int curW = 1;
        int H, W, N;
        cin >> H >> W >> N;

        for (int j = 1; j < N; j++)
        {
            curH++;

            if (curH > H)
            {
                curW++;
                curH = 1;
            }
        }

        printf("%d%02d\n", curH, curW);
    }
}