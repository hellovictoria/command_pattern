#include "SimpleRemoteControl.h"
#include "Command.h"
#include <cstddef>

SimpleRemoteControl::SimpleRemoteControl()
{
    this->slot = NULL;
}

void SimpleRemoteControl::setCommand(Command* command)
{
    this->slot = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    slot->execute();
}
