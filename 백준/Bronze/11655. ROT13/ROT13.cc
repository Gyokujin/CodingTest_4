#include <string>
#include <iostream>
using namespace std;

char rot13(char c, bool capital)
{
    int ascii = (int)c + 13;

    if ((capital && ascii > 90) || (!capital && ascii > 122))
        ascii -= 26;

    return (char)ascii;
}

int main()
{
    string input;
    getline(cin, input);

    for (char c : input) // 0 ~ 9 : 48 ~ 57 
    {
        if ((int)c >= 65 && (int)c <= 90) // A ~ Z : 65 ~ 90
            c = rot13(c, true);
        else if ((int)c >= 97 && (int)c <= 122) // a ~ z : 97 ~122
            c = rot13(c, false);

        cout << c;
    }
}