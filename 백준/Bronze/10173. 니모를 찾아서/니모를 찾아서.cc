#include <string>
#include <algorithm>
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    string word;

    while (getline(cin, word) && word != "EOI")
    {
        transform(word.begin(), word.end(), word.begin(),
            [](unsigned char c) { return toupper(c); });

        if (word.find("NEMO") != string::npos)
            cout << "Found" << endl;
        else
            cout << "Missing" << endl;
    }
}