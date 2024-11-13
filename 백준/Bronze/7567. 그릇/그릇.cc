#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    int answer = 10;

    for (int i = 1; i < word.size(); i++)
        answer += word[i] == word[i - 1] ? 5 : 10;

    cout << answer;
}