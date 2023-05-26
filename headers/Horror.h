#include "Genre.h"

class Horror: public Genre {
private:
    int dollDist;
    SceneNode* failCase;
public:
    Horror(/* args */);
    ~Horror();
    void setupScenes();
    void playScene();
};