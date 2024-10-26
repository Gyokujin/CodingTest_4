#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> coins;
    int answer = 0;
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
        int coin;
        cin >> coin;
        coins.push_back(coin);
    }

    for (int i = 0; i < coins.size(); i++)
    {
        if (K < coins[i + 1] || i == coins.size() - 1)
        {
            K -= coins[i]; // 써야할 금액만큼 K에 감소시킨다
            answer++;
            i = -1;
        }

        if (K == 0)
            break;
    }
    
    cout << answer;
}