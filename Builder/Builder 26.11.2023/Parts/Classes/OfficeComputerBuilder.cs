using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BuilderDZ;
class OfficeComputerBuilder : IComputerBuilder
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
        computer.GraphicsCard = graphicsCard;
    }

    public void SetStorage(string storage)
    {
        computer.Storage = storage;
    }

    public Computer GetComputer()
    {
        return computer;
    }
}