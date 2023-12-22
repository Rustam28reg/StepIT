using State.Interfaces;

namespace State.Classes;
public class GreenLightState : ITrafficLightState
{
    public void Handle(TrafficLight light)
    {
        Console.WriteLine("Green light");
        light.State = new YellowLightState(); 
    }
}
