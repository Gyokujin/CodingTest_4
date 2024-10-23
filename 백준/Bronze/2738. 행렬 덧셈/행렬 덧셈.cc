#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<int> numbers1;
    vector<int> numbers2;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int num;
            cin >> num;
            numbers1.push_back(num);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int num;
            cin >> num;
            numbers2.push_back(num);
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << numbers1[i * M + j] + numbers2[i * M + j] << ' ';

        cout << endl;
    }
}