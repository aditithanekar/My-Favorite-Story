#include <iostream>
#include "../headers/Genre.h"
#include "../headers/Scene.h"
// #include <string> 

using namespace std;


Genre::Genre(string genreName){
    this->genreName = genreName;
}

string Genre::getGenreName(){
    return genreName;
}
//this function is here to print the scene only!
void Genre::displayScene(Scene* currScene)
{
    OutputText *output = new OutputText(); 

    string str = currScene->getText();
    while(str != ""){
        output->printingText(str,100);
        currScene->getText();
    }
}

