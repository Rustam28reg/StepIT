using AbstractFactory.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Classes;

class LinuxMenu : IMenu
{
    public void Show()
    {
        Console.WriteLine("Linux menu.");
    }
}
