#include "../headers/Dating.h"
#include "../headers/InputText.h"

Dating::Dating()
{
    genreName="Dating";
    root = nullptr;
}
Dating::~Dating()
{
    //Do i delete all of these...?
    // delete end;
    // delete scene8b;
    // delete scene8a;
    // delete scene7ab;
    // delete scene7aa;
    // delete scene6bb;
    // delete scene6b;
    // delete scene6a;
    // delete scene5bb;
    // delete scene5ba;
    // delete scene5ab;
    // delete scene5aatransitionb;
    // delete scene5aatransitiona;
    // delete scene5;
    // delete scene4b;
    // delete scene4a;
    // delete scene3b;
    // delete scene3a;
    // delete scene2b;
    // delete scene2a;
    // delete scene1;
}

void Dating::setupScenes()
{
    SceneNode* scene1 = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene1.txt");
    SceneNode* scene2a = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene2a.txt");
    SceneNode* scene2b = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene2b.txt");
    SceneNode* scene3a = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene3a.txt");
    SceneNode* scene3b = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene3b.txt");    
    SceneNode* scene4a = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene4a.txt");
    SceneNode* scene4b = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene4b.txt");
    SceneNode* scene5aa = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene5aa.txt");
    SceneNode* scene5aatransitiona = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene5.5a.txt");
    SceneNode* scene5aatransitionb = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene5.5b.txt");
    SceneNode* scene5ab = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene5ab.txt");
    SceneNode* scene5ba = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene5ba.txt");
    SceneNode* scene5bb = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene5bb.txt");
    SceneNode* scene6a = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene6a.txt");
    SceneNode* scene6b = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene6b.txt");
    SceneNode* scene6bb = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene6bb.txt");
    SceneNode* scene7aa = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene7aa.txt");
    SceneNode* scene7ab = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene7ab.txt");
    SceneNode* scene8a = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene8a.txt");
    SceneNode* scene8b = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/scene8b.txt");
    SceneNode* end = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/dating/ending.txt");




    root = scene1;
    scene1->choiceA = scene2a;
    scene1->choiceB = scene2b;
    scene2a->choiceA = scene3a;
    scene2a->choiceB = scene3b;

    scene3a->choiceA = scene2b;
    scene3a->choiceB = scene2b;
    scene3b->choiceA = scene2b;
    scene3b->choiceB = scene2b;
    scene2b->choiceA = scene4a;
    scene2b->choiceB = scene4b;

    scene4a->choiceA = scene5aa;
    scene4a->choiceB = scene5ab;
    scene4b->choiceA = scene5ba;
    scene4b->choiceB = scene5bb;

    scene5ba->choiceA = end;
    scene5ba->choiceB = end;
    scene5bb->choiceA = end; 
    scene5bb->choiceB = end; 

    scene5aa-> choiceA = scene5aatransitiona;
    scene5aa->choiceB =scene5aatransitionb;
    scene5aatransitiona->choiceA = scene6a;
    scene5aatransitiona->choiceB =scene6a;
    scene5aatransitionb->choiceA = scene6a;
    scene5aatransitionb->choiceB = scene6a;

    scene5ab->choiceA = scene6b;
    scene5ab->choiceB = scene6bb;
    scene6b->choiceA = end;
    scene6b->choiceB = end;
    scene6bb->choiceA = end;
    scene6bb->choiceB = end;
    

    scene6a->choiceA = scene7aa;
    scene6a->choiceB = scene7ab;

    scene7aa->choiceA = end;
    scene7aa->choiceB = end;
    scene7ab->choiceA = scene8a;
    scene7ab->choiceB = scene8b;

    scene8a->choiceA = end;
    scene8a->choiceB = end;
    scene8b->choiceA = end;
    scene8b->choiceB = end;
    
}
void Dating::playScene()
{
    //first print welcome scene 0
    //ADD THIS HERE before scene1
    // char inputChar;


    SceneNode* currentSceneNode = root;
    while(currentSceneNode != nullptr)
    {
        InputText input;
        displayScene(currentSceneNode->scene);    
        input.setUserInput();

        if(input.getUserInput() == 'A' || input.getUserInput() =='a')
        {
            currentSceneNode = currentSceneNode->choiceA;
        }
        else if(input.getUserInput() == 'B' || input.getUserInput() =='b')
        {
            currentSceneNode = currentSceneNode->choiceB;
        }
        
    }    
}