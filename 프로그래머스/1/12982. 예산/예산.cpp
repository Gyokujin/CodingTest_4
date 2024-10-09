#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> d, int budget)
{
    int answer = 0;
    int price = 0;
    sort(d.begin(), d.end());
    
    for (int num : d)
    {
        if (price + num <= budget)
        {
            answer++;
            price += num;
        }
    }
    
    return answer;
}