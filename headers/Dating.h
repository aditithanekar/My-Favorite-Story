#include "Genre.h"

class Dating:public Genre
{
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