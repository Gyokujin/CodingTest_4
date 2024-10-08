#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int lastNum = -1;
    
    for (int num : arr)
    {
        if (num != lastNum)
            answer.push_back(num);
        
        lastNum = num;
    }

    return answer;
}