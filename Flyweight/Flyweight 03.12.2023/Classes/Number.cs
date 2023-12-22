using Flyweight.Interfaces;

namespace Flyweight.Classes;
class Number : INumber
{
    private readonly int _number;

    public Number(int number)
    {
        _number = number;
    }

    public void Print()
    {
        Console.WriteLine($"Number: {_number}");
    }
}