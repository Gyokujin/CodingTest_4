using System;

public class Example
{
    public static void Main()
    {
        int N = int.Parse(Console.ReadLine());

        for (int i = 0; i < N; i++)
        {
            for (int j = N; j > i; j--)
                Console.Write('*');

            Console.WriteLine();
        }
    }
}