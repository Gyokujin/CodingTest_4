#include <string>
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int N, M;
        cin >> N >> M;
        int count = 0;

        for (int j = N; j <= M; j++)
        {
            string numS = to_string(j);

            for (char c : numS)
            {
                if (c == '0')
                    count++;
            }
        }

        cout << count << endl;
    }
}