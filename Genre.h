#pragma

#include <iostream>
#include <string>
using namespace std;

class Genre{
    protected:
        string genreName;
        Scene scenes[30];
    public:
        Genre(string genre);
        string getGenreName();
        virtual void playScene() = 0;
        virtual void setupScenes() = 0;
};