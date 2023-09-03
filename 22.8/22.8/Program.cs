#region Task 1
//Console.Write("Введите число от 1 до 100: ");
//int number;

//if (Int32.TryParse(Console.ReadLine(), out number))
//{
//    if (number >= 1 && number <= 100)
//    {
//        if (number % 3 == 0 && number % 5 == 0)
//        {
//            Console.WriteLine("Fizz Buzz");
//        }
//        else if (number % 3 == 0)
//        {
//            Console.WriteLine("Fizz");
//        }
//        else if (number % 5 == 0)
//        {
//            Console.WriteLine("Buzz");
//        }
//        else
//        {
//            Console.WriteLine(number);
//        }
//    }
//    else
//    {
//        Console.WriteLine("Ошибка: введите число от 1 до 100.");
//    }
//}
//else
//{
//    Console.WriteLine("Ошибка: введите корректное число.");
//}
#endregion

#region Task 2
/*Console.Write("Введите первое число: ");
if (double.TryParse(Console.ReadLine(), out double value))
{
    Console.Write("Введите процент: ");
    if (double.TryParse(Console.ReadLine(), out double percentage))
    {
        double result = (percentage / 100) * value;
        Console.WriteLine($"Результат: {result}");
    }
    else
    {
        Console.WriteLine("Ошибка: введите корректный процент.");
    }
}
else
{
    Console.WriteLine("Ошибка: введите корректное число.");
}*/
#endregion

#region Task 3
/*int[] digits = new int[4]; 

for (int i = 0; i < 4; i++)
{
    Console.Write($"Введите {i + 1}-ю цифру: ");
    if (int.TryParse(Console.ReadLine(), out int digit))
    {
        digits[i] = digit;
    }
    else
    {
        Console.WriteLine("Ошибка: введите корректную цифру.");
        i--; // Уменьшаем счетчик, чтобы пользователь ввел цифру повторно
    }
}

int result = digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
Console.WriteLine($"Сформированное число: {result}");*/
#endregion

#region Task 4
/*Console.Write("Введите шестизначное число: ");
if (int.TryParse(Console.ReadLine(), out int number) && number >= 100000 && number <= 999999)
{
    Console.Write("Введите номер первого разряда для обмена: ");
    if (int.TryParse(Console.ReadLine(), out int firstIndex) && firstIndex >= 1 && firstIndex <= 6)
    {
        Console.Write("Введите номер второго разряда для обмена: ");
        if (int.TryParse(Console.ReadLine(), out int secondIndex) && secondIndex >= 1 && secondIndex <= 6)
        {
            int[] digits = new int[6];
            int temp = number;

            for (int i = 5; i >= 0; i--)
            {
                digits[i] = temp % 10;
                temp /= 10;
            }
            // Обмен цифр
            int tempDigit = digits[firstIndex - 1];
            digits[firstIndex - 1] = digits[secondIndex - 1];
            digits[secondIndex - 1] = tempDigit;

            int result = digits[0] * 100000 + digits[1] * 10000 + digits[2] * 1000 + digits[3] * 100 + digits[4] * 10 + digits[5];
            Console.WriteLine($"Результат обмена: {result}");
        }
        else
        {
            Console.WriteLine("Ошибка: введите корректный номер второго разряда.");
        }
    }
    else
    {
        Console.WriteLine("Ошибка: введите корректный номер первого разряда.");
    }
}
else
{
    Console.WriteLine("Ошибка: введите корректное шестизначное число.");
}*/
#endregion

#region Task 5

/*Console.Write("Enter date: ");
DateTime date = DateTime.Parse(Console.ReadLine());

string week = date.DayOfWeek.ToString();
int month = date.Month;
static string GetSeason(int month)
{
    switch (month)
    {
        case 12:
        case 1:
        case 2:
            return "Winter";
        case 3:
        case 4:
        case 5:
            return "Spring";
        case 6:
        case 7:
        case 8:
            return "Summer";
        case 9:
        case 10:
        case 11:
            return "Autumn";
        default:
            return "Invalid Month";
    }
}
Console.Write(week);
Console.WriteLine($" {GetSeason(month)}");*/

#endregion

#region Task 6
/*while (true) 
{
    Console.Write(
        "1. Fahrenheit to Celsius\n" +
        "2. Celsius to Fahrenheit\n" +
        "Enter your choice - ");
    int choice = int.Parse(Console.ReadLine());
    Console.WriteLine(ConvectorGraduse(choice));

    static string ConvectorGraduse(int choice)
    {
    double temperature;
        switch (choice)
        {
            case 1:
                Console.Write("Enter temperature in fahrenheit - ");
                temperature = double.Parse(Console.ReadLine());
                temperature = (temperature - 32) / 1.8;
                return temperature.ToString();
            case 2:
                Console.Write("Enter temperature in celsius - ");
                temperature = double.Parse(Console.ReadLine());
                temperature = temperature * 1.8 + 32;
                return temperature.ToString();
            default:
                return "";
        }
    }
}*/

#endregion

#region Task 7
/*int num3;
Console.Write("Enter first number - ");
int num1 = int.Parse(Console.ReadLine());

Console.Write("Enter socnd number - ");
int num2 = int.Parse(Console.ReadLine());

if (num1 > num2)
{
    num3 = num1;
    num1 = num2;
    num2 = num3;
}

for (int i = num1; i <= num2; i++)
{
    if (i % 2 == 0)
    {
        Console.WriteLine(i.ToString());
    }
}
*/
#endregion
