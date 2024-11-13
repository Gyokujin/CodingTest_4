#include <iostream>
using namespace std;

string days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
    int remainDay = 0;
    int D, M;
    cin >> D >> M;

    for (int i = 0; i < M - 1; i++)
        remainDay += month[i];

    remainDay += D - 1;
    cout << days[(remainDay + 3) % 7];
}