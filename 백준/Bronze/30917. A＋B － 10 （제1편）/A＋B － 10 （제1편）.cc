#include <iostream>
using namespace std;

int main()
{
    int resp;
    int a = -1;
    int b = -1;
    int count = 1;

    for (int i = 1; i <= 18; i++)
    {
        if (a == -1)
            cout << "? A ";
        else
            cout << "? B ";
        
        cout << count << endl;
        cin >> resp;

        if (resp == 1)
        {
            if (a == -1)
                a = count;
            else
                b = count;

            count = 0;
        }

        if (a != -1 && b != -1)
            break;

        count++;
    }

    cout << "! " << a + b;
}