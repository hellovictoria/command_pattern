#ifndef _LIGHT_H
#define _LIGHT_H
#include <string>

class Light
{
    public:
        Light();
        void on();
        void off();
    private:
        std::string name;
};
#endif
