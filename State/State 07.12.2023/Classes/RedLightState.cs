using State.Interfaces;

namespace State.Classes;

public class RedLightState : ITrafficLightState
{
    public void Handle(TrafficLight light)
    {
        Console.WriteLine("Red light");
        light.State = new GreenLightState(); 
    }
}

