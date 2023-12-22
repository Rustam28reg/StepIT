using FactoryMethod;

 // Создание экземпляров фабрик для каждого типа автомобилей
 IAutomobileFactory sedanFactory = new SedanFactory();
 IAutomobileFactory suvFactory = new SUVFactory();
 IAutomobileFactory truckFactory = new TruckFactory();

 // Создание автомобилей разных типов с помощью соответствующих фабрик
 IAutomobile sedan = sedanFactory.CreateAutomobile();
 IAutomobile suv = suvFactory.CreateAutomobile();
 IAutomobile truck = truckFactory.CreateAutomobile();


 Console.WriteLine("Information about created automobiles:");
 Console.WriteLine();
 sedan.GetModelInfo();
 Console.WriteLine();
 suv.GetModelInfo();
 Console.WriteLine();
 truck.GetModelInfo();
 Console.WriteLine();
