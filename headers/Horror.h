#include "Genre.h"

class Horror: public Genre {
private:
    int dollDist;
    SceneNode* failCase;
public:
    Horror();
    ~Horror();
    void setupScenes();
    void playScene();
};