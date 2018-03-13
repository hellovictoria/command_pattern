#ifndef _COMMAND_H
#define _COMMAND_H

class Light;

class Command
{
    public:
        virtual void execute()=0;
};

class LightOnCommand : public Command
{
    public:
        LightOnCommand(Light* light);
        virtual void execute();
    private:
        Light* light;
};

#endif
