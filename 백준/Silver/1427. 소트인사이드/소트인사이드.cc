#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector<int> numbers;
    string answer = "";
    string input;
    cin >> input;

    for (char c : input)
        numbers.push_back((int)c - 48);

    sort(numbers.begin(), numbers.end(), greater<int>());

    for (int num : numbers)
        answer += (char)num + 48;

    cout << answer;
}