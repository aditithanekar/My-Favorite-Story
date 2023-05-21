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