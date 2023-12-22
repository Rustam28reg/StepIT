using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderDZ;

class GamingComputerBuilder : IComputerBuilder
{
    private Computer computer = new Computer();

    public void SetProcessor(string processor)
    {
        computer.Processor = processor;
    }

    public void SetRAM(int ram)
    {
        computer.RAM = ram;
    }

    public void SetGraphicsCard(string graphicsCard)
    {
        computer.GraphicsCard = graphicsCard + " for gaming";
    }

    public void SetStorage(string storage)
    {
        computer.Storage = storage + " SSD";
    }

    public Computer GetComputer()
    {
        return computer;
    }
}