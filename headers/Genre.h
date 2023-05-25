#pragma

#include "Scene.h"
#include "OutputText.h"
//#include "InputText.h"
#include <iostream>
#include <string>
using namespace std;

class Genre{

    struct SceneNode
    {
        Scene* scene;
        SceneNode* choiceA;
        SceneNode* choiceB;
        SceneNode(string filename): scene(new Scene(filename)), choiceA(nullptr), choiceB(nullptr){};
    };
    protected:
        string genreName;
        SceneNode* root;
    public:
        Genre(string genre);
        string getGenreName();
        virtual void playScene() = 0;// this is the one for choices/playing
        virtual void setupScenes() = 0;
        void displayScene(Scene* currScene); 

};
