using State.Interfaces;

namespace State.Classes;

public class YellowLightState : ITrafficLightState
{
    public void Handle(TrafficLight light)
    {
        Console.WriteLine("Yellow Light");
        light.State = new RedLightState(); 
    }
}

