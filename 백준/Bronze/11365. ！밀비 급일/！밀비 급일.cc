#include <string>
#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string word;
        getline(cin, word);

        if (word == "END")
            break;

        for (int i = word.size() - 1; i >= 0; i--)
            cout << word[i];

        cout << endl;
    }
}