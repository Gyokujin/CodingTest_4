#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> balls(N);

    for (int i = 0; i < N; i++)
        balls[i] = i + 1;

    for (int index = 0; index < M; index++)
    {
        int i, j;
        cin >> i >> j;
        reverse(balls.begin() + i - 1, balls.begin() + j);
    }

    for (int ball : balls)
        cout << ball << ' ';
}