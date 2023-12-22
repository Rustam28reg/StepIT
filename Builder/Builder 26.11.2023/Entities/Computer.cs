using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderDZ;

class Computer
{
    public string Processor { get; set; }
    public int RAM { get; set; }
    public string GraphicsCard { get; set; }
    public string Storage { get; set; }

    public void ShowDetails()
    {
        Console.WriteLine($"Processor: {Processor}");
        Console.WriteLine($"RAM: {RAM}GB");
        Console.WriteLine($"Graphics Card: {GraphicsCard}");
        Console.WriteLine($"Storage: {Storage}");
    }
}

