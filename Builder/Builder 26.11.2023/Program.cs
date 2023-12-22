
using Builder_26._11._2023.Services;
using BuilderDZ;

IComputerBuilder officeBuilder = new OfficeComputerBuilder();
IComputerBuilder gamingBuilder = new GamingComputerBuilder();
IComputerBuilder designerBuilder = new DesignerComputerBuilder();


ComputerDirector director = new ComputerDirector();


director.ConstructComputer(officeBuilder);
Computer officeComputer = (officeBuilder as OfficeComputerBuilder).GetComputer();

director.ConstructComputer(gamingBuilder);
Computer gamingComputer = (gamingBuilder as GamingComputerBuilder).GetComputer();

director.ConstructComputer(designerBuilder);
Computer designerComputer = (designerBuilder as DesignerComputerBuilder).GetComputer();


Console.WriteLine("Office Computer Details:");
officeComputer.ShowDetails();

Console.WriteLine("\nGaming Computer Details:");
gamingComputer.ShowDetails();

Console.WriteLine("\nDesigner Computer Details:");
designerComputer.ShowDetails();