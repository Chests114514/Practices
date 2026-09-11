using System;
using System.Collections.Generic;
using System.Linq;

class Program
{
    static void Main()
    {
        Console.WriteLine("=== .NET Runtime Tester ===");

        // 1. Basic Output Test
        Console.WriteLine($"Runtime Version: {Environment.Version}");
        Console.WriteLine($"OS Version: {Environment.OSVersion}");
        Console.WriteLine($"64-bit OS: {Environment.Is64BitOperatingSystem}");
        Console.WriteLine($"Processor Count: {Environment.ProcessorCount}");

        // 2. List Control Test
        var numbers = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        Console.WriteLine($"List Contents: {string.Join(", ", numbers)}");
        Console.WriteLine($"Sum of List: {numbers.Sum()}");
        Console.WriteLine($"Average of List: {numbers.Average()}");
        Console.WriteLine($"Max of List: {numbers.Max()}");
        Console.WriteLine($"Min of List: {numbers.Min()}\n");

        // 3. LINQ Test
        var evenNumbers = numbers.Where(n => n % 2 == 0).ToList();
        Console.WriteLine($"Even Numbers: {string.Join(", ", evenNumbers)}\n");

        // 4. String Manipulation Test
        string text = "Hello, .NET";
        Console.WriteLine($"Original Text: {text}");
        Console.WriteLine($"Uppercase: {text.ToUpper()}");
        Console.WriteLine($"Reverse: {new string(text.Reverse().ToArray())}\n");

        // 5. Dictionary Test
        var dict = new Dictionary<string, int>
        {
                { "apple", 1 },
                { "banana", 2},
                { "cherry", 3 }
        };
        Console.WriteLine("Dictionary Contents:");
        foreach (var kvp in dict)
        {
            Console.WriteLine($"Key: {kvp.Key}, Value: {kvp.Value}");
        }

        Console.WriteLine("\n=== Test Completed ===");
    }
}