#include <algorithm>
using namespace std;

int solution(string t, string p)
{
    int answer = 0;
    
    for (int i = 0; i <= t.size() - p.size(); i++)
    {
        string word = t.substr(i, p.size());
        
        if (word == p)
            answer++;
        else
        {
            bool able = false;
        
            for (int j = 0; j < word.size(); j++)
            {
                if ((int)word[j] - 48 > (int)p[j] - 48)
                    break;
                else if ((int)word[j] - 48 < (int)p[j] - 48)
                {
                    able = true;
                    break;
                }
            }

            if (able)
                answer++;
        }
    }

    return answer;
}