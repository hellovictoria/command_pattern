#include "Command.h"
#include "Light.h"

LightOnCommand::LightOnCommand(Light* light)
{
    this->light = light;
}

void LightOnCommand::execute()
{
    light->on();
}
