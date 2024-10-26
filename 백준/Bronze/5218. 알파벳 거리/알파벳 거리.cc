#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    vector<string> words1;
    vector<string> words2;

    for (int i = 0; i < T; i++)
    {
        string words[2];
        cin >> words[0] >> words[1];
        words1.push_back(words[0]);
        words2.push_back(words[1]);
    }

    for (int i = 0; i < T; i++)
    {
        cout << "Distances: ";

        for (int j = 0; j < words1[i].size(); j++)
        {
            int ascii1 = (int)words1[i][j] - 64;
            int ascii2 = (int)words2[i][j] - 64;
            int dis = ascii1 > ascii2 ? ascii2 + 26 - ascii1 : ascii2 - ascii1;
            cout << dis << ' ';
        }

        cout << endl;
    }
}