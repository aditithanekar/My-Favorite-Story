#pragma once
#include "Genre.h"

class Dating:public Genre
{
    public: 
        Dating();
        ~Dating();
        void destructDating(SceneNode* current);
        void playScene();
        void setupScenes();
        SceneNode* getRoot()
        {
            if(root!=nullptr)
            {
                return root;
            }
            return nullptr;
            
        }


};