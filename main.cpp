#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "OutputText.h"

using namespace std;

int main(){
    //OutputText t = OutputText(text);

    string text = "Hello World!";
    OutputText t;
    int delay_ms = 100; // Delay in milliseconds
    t.printingText(text, delay_ms);
    

return 0;
}
