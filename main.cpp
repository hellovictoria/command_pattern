#include "Command.h"
#include "Light.h"
#include "SimpleRemoteControl.h"

int main()
{
    SimpleRemoteControl* remote = new SimpleRemoteControl();
    Light* light = new Light();
    LightOnCommand* loncommand = new LightOnCommand(light);

    remote->setCommand(loncommand);
    remote->buttonWasPressed();

    return 0;
}
