#include <iostream>
using namespace std;

int main()
{
    int testIndex;
    cin >> testIndex;

    for (int i = 0; i < testIndex; i++)
    {
        string result;
        cin >> result;
        int point = 1;
        int answer = 0;

        for (char c : result)
        {
            if (c == 'O')
            {
                answer += point;
                point++;
            }
            else if (point > 1)
                point = 1;
        }

        cout << answer << endl;
    }
}