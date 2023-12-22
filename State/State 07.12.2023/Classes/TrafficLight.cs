using State.Interfaces;

namespace State.Classes;

public class TrafficLight
{
    public ITrafficLightState State { get; set; }

    public TrafficLight()
    {
        State = new RedLightState(); 
    }

    public void Change()
    {
        State.Handle(this); 
    }
}
