using AbstractFactory.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Classes;

class LinuxFactory : IFactory
{
    public IWindow CreateWindow()
    {
        return new LinuxWindow();
    }

    public IMenu CreateMenu()
    {
        return new LinuxMenu();
    }
}
