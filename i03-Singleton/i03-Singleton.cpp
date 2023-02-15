#include <iostream>
#include "ChocolateBoiler.h"

int main()
{
    ChocolateBoiler* boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler = ChocolateBoiler::getInstance();
    boiler->fill();
    boiler->boil();
    boiler->drain();

    return 0;
}

