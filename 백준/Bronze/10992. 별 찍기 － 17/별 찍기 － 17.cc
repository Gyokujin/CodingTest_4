#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = N - i - 1; j > 0; j--)
            cout << ' ';

        if (i == 0 || i == N - 1)
        {
            for (int j = 0; j < i * 2 + 1; j++)
                cout << '*';
        }
        else
        {
            cout << '*';

            for (int j = 0; j < i * 2 - 1; j++)
                cout << ' ';

            cout << '*';
        }

        cout << endl;
    }
}