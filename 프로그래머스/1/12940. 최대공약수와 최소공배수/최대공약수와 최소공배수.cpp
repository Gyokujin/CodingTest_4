#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(int n, int m)
{
    int minNum = min(n, m);
    int maxNum = max(n, m);
    
    int num1 = 0;
    int num2 = 0;
    
    for (int i = 1; i <= minNum; i++)
    {
        if (n % i == 0 && m % i == 0)
            num1 = i;
    }
    
    int count = maxNum;
    
    while (true)
    {
        if (count % n == 0 && count % m == 0)
        {
            num2 = count;
            break;
        }
        
        count++;
    }
    
    vector<int> answer = { num1 ,num2 };
    return answer;
}