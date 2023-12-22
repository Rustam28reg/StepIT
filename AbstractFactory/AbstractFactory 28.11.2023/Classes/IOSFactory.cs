using AbstractFactory.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Classes;

class IOSFactory : IFactory
{
    public IWindow CreateWindow()
    {
        return new IOSWindow();
    }

    public IMenu CreateMenu()
    {
        return new IOSMenu();
    }
}
