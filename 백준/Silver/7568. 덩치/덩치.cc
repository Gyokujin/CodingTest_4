#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> infos(N);
    vector<int> ranks(N, 1);

    for (int i = 0; i < N; i++)
    {
        int weight, height;
        cin >> weight >> height;
        infos[i] = make_pair(weight, height);
    }

    for (int i = 0; i < infos.size(); i++)
    {
        for (int j = 0; j < infos.size(); j++)
        {
            if (infos[i].first < infos[j].first && infos[i].second < infos[j].second) // 현재 i번째 사람은 j번째 사람보다 덩치가 작은걸로 간주. 즉 rank이 1 밀려나 순위가 하락된다.
                ranks[i]++;
        }
    }

    for (int rank : ranks)
        cout << rank << ' ';
}