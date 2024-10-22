#include <iostream>
using namespace std;

int main()
{
    int numbers[8];

    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
        cin >> numbers[i];

    bool isAble = true;
    int sub = numbers[1] - numbers[0];

    for (int i = 1; i < sizeof(numbers) / sizeof(numbers[0]) - 1; i++)
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