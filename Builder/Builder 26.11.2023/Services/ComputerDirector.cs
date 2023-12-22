using BuilderDZ;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Builder_26._11._2023.Services;

class ComputerDirector
{
    public void ConstructComputer(IComputerBuilder builder)
    {
        builder.SetProcessor("Intel Core i5");
        builder.SetRAM(8);
        builder.SetGraphicsCard("NVIDIA GeForce GTX 1650");
        builder.SetStorage("1TB");
    }
}
