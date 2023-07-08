#include <iostream>
#include "boiler.h"

int main()
{
    boiler* Boiler = new boiler("philips", "k-123", 1, 2, 3);

    print_boiler(Boiler);
}
