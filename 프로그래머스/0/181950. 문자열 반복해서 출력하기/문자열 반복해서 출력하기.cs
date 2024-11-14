using System;

public class Example
{
    public static void Main()
    {
        String[] input = Console.ReadLine().Split();
        string word = input[0];
        int index = int.Parse(input[1]);

        for (int i = 0; i < index; i++)
            Console.Write(word);
    }
}