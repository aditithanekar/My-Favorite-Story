#include "../headers/Scene.h"
#include <fstream>
#include <iostream>

using namespace std;


Scene::Scene(string fileName){
    
    textIndex = 0;
    totalTexts = 0;
    //for item in fin, populate array, increment totalTexts
    ifstream fin(fileName);
    if(!fin.is_open()){
        throw runtime_error(fileName + " file is not open.");
    }
    string line = "";
    while(getline(fin,line)){
        text[totalTexts] = line;
        ++totalTexts;
    }
    ++totalTexts;
    fin.close();
}

Scene::~Scene(){
    
}

string Scene::getText(){
    if(textIndex < totalTexts){
        textIndex++;
        return text[textIndex -1];
    }
    
}


