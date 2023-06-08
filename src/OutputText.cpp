#include "../headers/OutputText.h"
#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

OutputText::OutputText(){}

void OutputText::printingText(const string& text, int delay_ms){
    for (char c : text) {
        if (c == '%'){
            cout << endl;
            continue;
        }
        cout << c << flush; // Print character without buffering
        this_thread::sleep_for(chrono::milliseconds(delay_ms)); // Delay between characters
    }
}