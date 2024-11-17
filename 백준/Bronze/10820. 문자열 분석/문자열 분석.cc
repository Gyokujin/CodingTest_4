#include <string>
#include <iostream>
using namespace std;

int main()
{
    string input;

    while (getline(cin, input))
    {
        int counts[4] = { 0 }; // 소문자, 대문자, 숫자, 공백

        for (char c : input)
        {
            if (c == ' ') // 공백
                counts[3]++;
            else
            {
                int ascii = (int)c;

                if (ascii >= 97 && ascii <= 122) // 소문자
                    counts[0]++;
                else if (ascii >= 65 && ascii <= 90) // 대문자
                    counts[1]++;
                else // 숫자
                    counts[2]++;
            }
        }

        for (int num : counts)
            cout << num << ' ';

        cout << endl;
    }
}