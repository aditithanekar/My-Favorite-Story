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
        string getText();
        void printingText(const string& text, int delay_ms);
};

#endif