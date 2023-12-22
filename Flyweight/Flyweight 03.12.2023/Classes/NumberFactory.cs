using Flyweight.Interfaces;

namespace Flyweight.Classes;
class NumberFactory
{
    private readonly Dictionary<int, INumber> _numbers = new Dictionary<int, INumber>();

    public INumber GetNumber(int number)
    {
        if (!_numbers.TryGetValue(number, out INumber num))
        {
            num = new Number(number);
            _numbers[number] = num;
        }
        return num;
    }
}