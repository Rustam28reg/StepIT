using Flyweight.Classes;
using Flyweight.Interfaces;

class Program
{
    static void Main(string[] args)
    {
        NumberFactory factory = new NumberFactory();

        INumber num1 = factory.GetNumber(5);
        INumber num2 = factory.GetNumber(10);
        INumber num3 = factory.GetNumber(5); 

        num1.Print(); 
        num2.Print(); 
        num3.Print(); 
    }
}