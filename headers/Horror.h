#pragma once
#include "Genre.h"

class Horror: public Genre {
private:
    int dollDist;
    SceneNode* failCase;
public:
    Horror();
    ~Horror();
    void playScene(Player *userCharacter);
    void deleteAll();
    void setupScenes();
};