#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> numbers(N + 1, 0);

    for (int i = 2; i <numbers.size(); i++)
    {
        numbers[i] = numbers[i - 1] + 1;

        if (i % 2 == 0)
            numbers[i] = min(numbers[i], numbers[i / 2] + 1);

        if (i % 3 == 0)
            numbers[i] = min(numbers[i], numbers[i / 3] + 1);
    }

    cout << numbers[N] << endl;
}