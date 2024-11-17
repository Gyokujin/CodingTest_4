#include <iostream>
using namespace std;

string days[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
    int remainDay = 0;
    int x, y;
    cin >> x >> y;

    for (int i = 0; i < x - 1; i++)
        remainDay += month[i];

    remainDay += y - 1;
    cout << days[(remainDay + 1) % 7];
}