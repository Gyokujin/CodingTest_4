#include <string>
#include <vector>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    if (s.size() != 4 && s.size() != 6)
        answer = false;
    else
    {
        for (char c : s)
        {
            if ((int)c < 48 || (int)c > 57)
            {
                answer = false;
                break;
            }
        }
    }

    return answer;
}