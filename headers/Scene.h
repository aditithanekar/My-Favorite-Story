#include <string>

#ifndef __SCENE_H__
#define __SCENE_H__

using namespace std;

class Scene {
private:
    string graphics;
    int textIndex; //current index in text array
    int totalTexts; //total number of texts in array
    string text[10];
public:
    Scene(string fileName);
    ~Scene();

    //returns current item in array of strings, increment textIndex
    string getText();
};

#endif
