using FactoryMethod;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FactoryMethod;

class SUVFactory : IAutomobileFactory
{
    public IAutomobile CreateAutomobile()
    {
        return new SUV();
    }
}
