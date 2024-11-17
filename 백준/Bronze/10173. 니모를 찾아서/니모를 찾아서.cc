#include <string>
#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        string word;
        getline(cin, word);

        if (word == "EOI")
            break;

        bool able = false;

        if (word.size() >= 4)
        {
            for (int i = 0; i < word.size() - 3; i++)
            {
                string curWord = "";

                for (int j = i; j < i + 4; j++)
                    curWord += toupper(word[j]);

                if (curWord == "NEMO")
                {
                    able = true;
                    break;
                }
            }
        }

        if (able)
            cout << "Found" << endl;
        else
            cout << "Missing" << endl;
    }
}