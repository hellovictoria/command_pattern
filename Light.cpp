#include "Light.h"
#include <iostream>

Light::Light()
{
    this->name = "Light";
}

void Light::on()
{
    std::cout << "Light is ON !" << std::endl;
}

void Light::off()
{
    std::cout << "Light is OFF !" << std::endl;
}
