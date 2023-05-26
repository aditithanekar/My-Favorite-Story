#ifndef InputText_h
#define InputText_h

#include <iostream>
#include <string>

using namespace std;

class InputText{
    private:
        char option;
    public:
        char getUserInput();
        void setUserInput();
        bool validOptions(const char& letter);
};

#endif