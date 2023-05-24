#include "Genre.h"
#include "Player.h"
#include "OutputText.h"
//#include "InputText.h"

class Horror: public Genre {
private:
    int dollDist;
    //int size;
public:
    Horror(/* args */);
    ~Horror();
    void setupScenes();
    void playScene();
};