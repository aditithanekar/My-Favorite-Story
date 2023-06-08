#include <iostream>
#include "../headers/Vanilla.h"
using namespace std;

Vanilla::Vanilla(): Player("Vanilla"){};
Vanilla::Vanilla(string inputName): Player(inputName){};

string Vanilla::getHappy(){
    return "\"Hurray! I'm so excited.\"\n";
}

string Vanilla::getSad(){
    return "\"Aw man, this sucks.\"\n";
}

string Vanilla::getSurprised(){
    return "\"Whoa! I didn't expect that.\"\n";
}

string Vanilla::getDistressed(){
    return "\"Ugh, this is terrible.\"\n";
}

string Vanilla::getLonely(){
    return "\"I feel so alone right now.\"\n";
}

string Vanilla::getFear(){
    return "\"AAAAAA!\"\n";
}