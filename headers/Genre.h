#pragma once

#include "Scene.h"
#include "OutputText.h"
//#include "InputText.h"
#include <iostream>
#include <string>
using namespace std;

struct SceneNode
{
    Scene* scene;
    SceneNode* choiceA;
    SceneNode* choiceB;
    SceneNode(string filename): scene(new Scene(filename)), choiceA(nullptr), choiceB(nullptr){};
    ~SceneNode(){
        delete scene;
    }
};
class Genre{

    protected:
        
        string genreName;
        SceneNode* root;
    public:
        Genre();
        string getGenreName();
        virtual void playScene() = 0;// this is the one for choices/playing
        virtual void setupScenes() = 0;
        void displayScene(Scene* currScene); 
};
