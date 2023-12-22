using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderDZ;

class DesignerComputerBuilder : IComputerBuilder
{
    private Computer computer = new Computer();

    public void SetProcessor(string processor)
    {
        computer.Processor = processor + " high-performance";
    }

    public void SetRAM(int ram)
    {
        computer.RAM = ram * 2;
    }

    public void SetGraphicsCard(string graphicsCard)
    {
        computer.GraphicsCard = graphicsCard + " professional";
    }

    public void SetStorage(string storage)
    {
        computer.Storage = storage + " HDD";
    }

    public Computer GetComputer()
    {
        return computer;
    }
}
