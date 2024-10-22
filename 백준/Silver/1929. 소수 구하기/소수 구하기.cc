#include <vector>
#include <iostream>
using namespace std;

vector<bool> eratosthenesSieve(int start, int end)
{
    vector<bool> createSieve(end + 1, true);
    createSieve[0] = false;
    createSieve[1] = false; // 0과 1은 제외한다.

    for (int i = 2; i <= end; i++) // end까지 순차적으로 진행
    {
        if (!createSieve[i]) // 이미 false라면 생략
            continue;
        else // true라면 배수들은 전부 false로 전환
        {
            for (int j = i * 2; j <= end; j += i)
                createSieve[j] = false;
        }
    }

    return createSieve;
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<bool> sieveNums = eratosthenesSieve(m, n);

    for (int i = m; i <= n; i++)
    {
        if (sieveNums[i])
            cout << i << '\n';
    }

    return 0;
}