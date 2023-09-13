using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _30._09._2023_2_task4
{
    internal class Manager:Worker
    {
        public string salary { get; set; }
        public override void print()
        {
            Console.WriteLine(salary);
        }
    }
}
