using AbstractFactory.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Classes;

class IOSMenu : IMenu
{
    public void Show()
    {
        Console.WriteLine("iOS menu.");
    }
}
