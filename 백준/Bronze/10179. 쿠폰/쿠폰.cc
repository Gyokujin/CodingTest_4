#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cout << fixed;
    cout.precision(2);

    for (int i = 0; i < n; i++)
    {
        double price;
        cin >> price;
        cout << "$" << price * 0.8 << endl;
    }
}