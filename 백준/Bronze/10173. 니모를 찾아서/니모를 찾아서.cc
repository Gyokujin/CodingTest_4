#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    string word;

    while (getline(cin, word) && word != "EOI")
    {
        string curWord = "";

        for (char c : word)
            curWord += toupper(c);

        if (curWord.find("NEMO") != string::npos)
            cout << "Found" << endl;
        else
            cout << "Missing" << endl;
    }
}