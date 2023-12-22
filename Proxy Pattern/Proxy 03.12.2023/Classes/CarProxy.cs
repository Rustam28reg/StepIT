using Proxy.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Proxy.Classes;

class CarProxy : ICar
{
    private readonly Car _car; 

    public CarProxy()
    {
        _car = new Car(); 
    }

    public void Drive()
    {
        Console.WriteLine("Proxy");

        _car.Drive();

        Console.WriteLine("Proxy");
    }
}
