#include "../headers/Dating.h"
#include "../headers/Genre.h"
#include "../headers/InputText.h"

Dating::Dating()
{
    genreName="Dating";
    root = nullptr;
}
Dating::~Dating()
{
    deleteDanglingPtrs(root->choiceB->choiceB->choiceB); //5bb
    deleteDanglingPtrs(root->choiceB->choiceB->choiceA); //5ba
    deleteDanglingPtrs(root->choiceB->choiceB); //4b

    deleteDanglingPtrs(root->choiceB->choiceA->choiceB->choiceB); //6bb
    deleteDanglingPtrs(root->choiceB->choiceA->choiceB->choiceA); //6b
    deleteDanglingPtrs(root->choiceB->choiceA->choiceB); //5ab
    

    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceB->choiceB->choiceB->choiceB); //8b
    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceB->choiceB->choiceB->choiceA); //8a
    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceB->choiceB->choiceB);//7ab


    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceB->choiceB->choiceA->choiceB); //end sub
    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceB->choiceB->choiceA); //7aa
    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceB->choiceB); //6a

    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceA); //transa
    deleteDanglingPtrs(root->choiceB->choiceA->choiceA->choiceB); //transb
    deleteDanglingPtrs(root->choiceB->choiceA->choiceA); //5aa

    deleteDanglingPtrs(root->choiceB->choiceA); //4a

    deleteDanglingPtrs(root->choiceA->choiceA); //3a
    deleteDanglingPtrs(root->choiceA->choiceB); //3b

    deleteDanglingPtrs(root->choiceA); //2a
    deleteDanglingPtrs(root->choiceB); //2b

    deleteDanglingPtrs(root); //1a
    root = nullptr;
}

void Dating::deleteDanglingPtrs(SceneNode* toDelete)
{
    if(toDelete!=nullptr)
    {
        toDelete->choiceA = nullptr;
        toDelete->choiceB = nullptr;
        delete toDelete;
        toDelete = nullptr;
    }

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
    end->choiceA = nullptr;
    end ->choiceB = nullptr;
    
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
    return;  
    
}