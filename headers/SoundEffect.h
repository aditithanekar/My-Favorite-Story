#ifndef SoundClass_H
#define SoundClass_H

#include <iostream>
#include <string>

using namespace std;

class SoundEffect{
    private:
        vector<string> sounds;
    public:
        Genre genreType;
        void playSound();

};

#endif