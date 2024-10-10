#include <algorithm>
#include <cmath>
using namespace std;

int solution(int n)
{
    int answer = 0;
    string word = "";
    
    // 3진법 변환
    while (n > 0)
    {
        int remain = n % 3;
        word = to_string(remain) + word;
        n /= 3;
    }
    
    // 앞뒤 반전 후 앞자리 0 제거
    reverse(word.begin(), word.end());
    
    while (*word.begin() == '0')
        word.erase(word.begin());
    
    // 10진법으로 표현
    for (int i = 0; i < word.size(); i++)
        answer += pow(3, word.size() - i - 1) * int(word[i] - 48);
    
    return answer;
}