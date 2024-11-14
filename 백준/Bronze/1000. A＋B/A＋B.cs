using System;

class Program
{
    static void Main(string[] args)
    {
        string[] inputs = Console.ReadLine().Split();
        int A = int.Parse(inputs[0]);
        int B = int.Parse(inputs[1]);
        Console.WriteLine(A + B);
    }
}