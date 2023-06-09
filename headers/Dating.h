#pragma once
#include "Genre.h"

class Dating:public Genre
{
    private:
        void deleteDanglingPtrs(SceneNode* toDelete);
    public: 
        Dating();
        ~Dating();
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