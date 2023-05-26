#include <iostream>
#include "../headers/Mint.h"
using namespace std;

Mint::Mint(): Player("Mint"){};
Mint::Mint(string inputName): Player(inputName){};

string Mint::getHappy(){
    return "Yippee, I guess...";
}

string Mint::getSad(){
    return "Wow, my life is just sad.";
}

string Mint::getSurprised(){
    return "Oh no, you scared me.";
}

string Mint::getDistressed(){
    return "Ugh, I hate feeling like this.";
}

string Mint::getLonely(){
    return "No way, I've never felt alone before.";
}

string Mint::getFear(){
    return "I'm so scared right now. No, I'm not joking.";
}