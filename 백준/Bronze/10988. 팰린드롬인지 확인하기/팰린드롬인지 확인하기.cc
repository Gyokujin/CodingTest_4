#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    bool isPalindrome = true;

    for (int i = 0; i < word.size() / 2; i++)
    {
        if (word[i] != word[word.size() - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    cout << isPalindrome;
}