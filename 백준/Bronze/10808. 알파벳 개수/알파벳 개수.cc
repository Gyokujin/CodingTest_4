#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> alphabets(26, 0);
    string S;
    cin >> S;

    for (char c : S)
        alphabets[(int)c - 97]++;

    for (int num : alphabets)
        cout << num << ' ';
}