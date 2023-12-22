using State.Classes;

class Program
{
    static void Main(string[] args)
    {
        TrafficLight trafficLight = new TrafficLight();

        trafficLight.Change(); 
        trafficLight.Change(); 
        trafficLight.Change(); 
    }
}