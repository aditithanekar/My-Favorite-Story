#pragma

#include <iostream>
#include "Player.h"
using namespace std;

class Mint : public Player{
    public: 
        Mint(string inputName);
        Mint();
        string getHappy();
        string getSad();
        string getSurprised();
        string getDistressed();
        string getLonely();
        string getFear();

};