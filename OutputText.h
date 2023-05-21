#ifndef OutputText_H
#define OutputText_H

#include <iostream>
#include <string>

using namespace std;

class OutputText{
    private:
        string text;
    public:
        OutputText();
        void printingText(const string& text, int delay_ms);
};

#endif