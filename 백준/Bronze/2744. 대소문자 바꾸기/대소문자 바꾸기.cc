#include <iostream>
using namespace std;

int main()
{
    string word;
    cin >> word;
    
    for (int i = 0; i < word.size(); i++)
    {
        word[i] = (int)word[i] <= 90 ? tolower(word[i]) : toupper(word[i]);
        cout << word[i];
    }
}