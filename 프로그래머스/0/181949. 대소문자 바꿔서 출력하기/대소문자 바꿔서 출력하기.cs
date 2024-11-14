using System;

public class Example
{
    public static void Main()
    {
        string s = Console.ReadLine();
        string answer = "";
        
        for (int i = 0; i < s.Length; i++)
        {
            if (s[i] >= 97)
                answer += char.ToUpper(s[i]);
            else
                answer += char.ToLower(s[i]);
        }
        
        Console.WriteLine(answer);
    }
}