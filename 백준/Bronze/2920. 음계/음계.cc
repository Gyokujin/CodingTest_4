#include <iostream>
using namespace std;

int main()
{
    int numbers[8];

    for (int i = 0; i < 8; i++)
        cin >> numbers[i];

    bool isAble = true;
    int sub = numbers[1] - numbers[0];

    for (int i = 1; i < 7; i++)
    {
        if (numbers[i + 1] - numbers[i] != sub)
        {
            isAble = false;
            break;
        }
    }

    if (isAble)
    {
        if (sub == 1)
            cout << "ascending";
        else
            cout << "descending";
    }
    else
        cout << "mixed";
}