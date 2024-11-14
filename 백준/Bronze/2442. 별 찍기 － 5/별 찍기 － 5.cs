using System;

public class Example
{
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            for (int j = i; j < N - 1; j++)
                Console.Write(' ');

            for (int j = 0; j < i * 2 + 1; j++)
                Console.Write('*');

            Console.WriteLine();
        }
    }
}