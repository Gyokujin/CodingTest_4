#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        string word;
        cin >> word;
        cout << word[0] << word[word.size() - 1] << endl;
    }
}