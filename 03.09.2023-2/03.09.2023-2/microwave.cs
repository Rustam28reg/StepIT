using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _03._09._2023_2
{
    internal class microwave:Device
    {
        public string Size { get; set; }
        public string Color { get; set; }

        public microwave() { }
        public microwave(string make, string model, string size, string color) : base(make, model)
        {
            Size = size;
            Color = color;
        }
        ~microwave() { }

        public override void Sound()
        {
            Console.WriteLine("Microwave sound");
        }
        public override void Show()
        {
            Console.WriteLine("Show Microwave name");
        }
        public override void Desc()
        {
            Console.WriteLine("Microwave desc");
        }
    }
}

