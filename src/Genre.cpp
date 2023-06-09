#include <iostream>
#include "../headers/Genre.h"
#include "../headers/Scene.h"

using namespace std;

Genre::Genre(){
    this->genreName = "Horror";
}

string Genre::getGenreName(){
    return genreName;
}

//this function is here to print the scene only!
void Genre::displayScene(Scene* currScene)
{
    OutputText output;
    string str = currScene->getText();
    while(str != ""){
        output.printingText(str,10);
        str = currScene->getText();
    }
}