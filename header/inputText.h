#ifndef InputText_h
#define InputText_h

#include <iostream>
#include <string>

using namespace std;

class InputText{
    private:
        char option;
    public:
        InputText();
        char getUserInput();
        bool validOptions(const char& letter);
};

#endif