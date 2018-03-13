#ifndef _SIMPLEREMOTECONTROL_H
#define _SIMPLEREMOTECONTROL_H

class Command;

class SimpleRemoteControl
{
    public:
        SimpleRemoteControl();
        void setCommand(Command* command);
        void buttonWasPressed();
    private:
        Command* slot;
};

#endif
