using Proxy.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Proxy.Classes;

class Car : ICar
{
    public void Drive()
    {
        Console.WriteLine("Car.");
    }
}
