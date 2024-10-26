#include <stack>
#include <iostream>
using namespace std;

int main()
{
    int answer = 0;
    int K;
    cin >> K;
    stack<int> numbers;

    for (int i = 0; i < K; i++)
    {
        int num;
        cin >> num;

        if (num != 0)
            numbers.push(num);
        else
            numbers.pop();
    }

    while (numbers.size() > 0)
    {
        answer += numbers.top();
        numbers.pop();
    }

    cout << answer;
}