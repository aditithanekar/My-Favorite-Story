#include <iostream>
#include "../headers/Vanilla.h"
using namespace std;

Vanilla::Vanilla(): Player("Vanilla"){};
Vanilla::Vanilla(string inputName): Player(inputName){};

string Vanilla::getHappy(){
    return "Hurray! I'm so excited.";
}

string Vanilla::getSad(){
    return "Aw man, this sucks.";
}

string Vanilla::getSurprised(){
    return "Whoa! I didn't expect that.";
}

string Vanilla::getDistressed(){
    return "Ugh, this is terrible.";
}

string Vanilla::getLonely(){
    return "I feel so alone right now.";
}

string Vanilla::getFear(){
    return "AAAAAA!";
}