using System;

public class Example
{
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());

        for (int i = N; i > 0; i--)
        {
            for (int j = i; j < N; j++)
                Console.Write(' ');

            for (int j = 0; j < i * 2 - 1; j++)
                Console.Write('*');

            Console.WriteLine();
        }
    }
}