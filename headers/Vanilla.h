#pragma

#include <iostream>
#include "Player.h"
using namespace std;

class Vanilla : public Player{
    public: 
        Vanilla(string inputName);
        Vanilla();
        string getHappy();
        string getSad();
        string getSurprised();
        string getDistressed();
        string getLonely();
        string getFear();

};