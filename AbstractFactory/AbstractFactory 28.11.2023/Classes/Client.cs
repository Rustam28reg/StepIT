using AbstractFactory.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace AbstractFactory.Classes;

class Client
{
    public void DisplayUI(IFactory factory)
    {
        var window = factory.CreateWindow();
        var menu = factory.CreateMenu();

        window.Display();
        menu.Show();
    }
}
