using AbstractFactory.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Classes;

class IOSWindow : IWindow
{
    public void Display()
    {
        Console.WriteLine("iOS window.");
    }
}
