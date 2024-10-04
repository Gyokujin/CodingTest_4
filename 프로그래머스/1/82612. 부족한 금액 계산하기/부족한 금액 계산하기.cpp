using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    for (int i = 0; i < count; i++)
    {
        int curPrice = price * (i + 1);
        
        if (money > 0)
        {
            money -= curPrice;
            
            if (money < 0)
                answer -= money;
        }
        else
            answer += curPrice;
    }
    
    return answer;
}