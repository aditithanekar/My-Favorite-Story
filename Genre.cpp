#include <iostream>
#include "Genre.h"
// #include <string>

using namespace std;


Genre::Genre(string genreName){
    this->genreName = genreName;
}

string Genre::getGenreName(){
    return genreName;
}