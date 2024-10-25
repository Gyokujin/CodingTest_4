#include <iostream>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int count = 1; // 최소 하나는 있기 때문에 초깃값 1

    for (char c : S)
    {
        if (c == ',')
            count++;
    }

    cout << count;
}