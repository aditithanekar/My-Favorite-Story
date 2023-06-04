#include "../headers/Horror.h"
#include "../headers/InputText.h"

Horror::Horror(){
    genreName = "Horror";
    failCase = nullptr;
    dollDist = 3;
}

Horror::~Horror(){
    delete failCase;
    SceneNode * curr = root->choiceA->choiceA;
    
    delete curr->choiceB->choiceB->choiceB->choiceB->choiceB->choiceB; //7
    delete curr->choiceB->choiceB->choiceB->choiceB->choiceB->choiceA; //6a
    
    delete curr->choiceB->choiceB->choiceB->choiceB->choiceB; //6
    delete curr->choiceB->choiceB->choiceB->choiceB->choiceA; //5a

    delete curr->choiceB->choiceB->choiceB->choiceB; //5
    delete curr->choiceB->choiceB->choiceB->choiceA; //4a

    delete curr->choiceB->choiceB->choiceB; //4
    delete curr->choiceB->choiceB->choiceA; //3a

    delete curr->choiceB->choiceB; //3
    delete curr->choiceB->choiceA; //2a
    
    delete curr->choiceB; //2
    delete curr->choiceA; //1.5a

    delete curr; //scene 1.5
    delete root->choiceA; //scene 1
    delete root; //scene 0
}

void Horror::setupScenes(){
    SceneNode* curr = nullptr;
    root = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/scene0.txt");
    //no choice
    root->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.txt");
    //no choice
    curr = root->choiceA;
    curr->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.5.txt");
    curr = curr->choiceA;
    
    //scene 1.5 choices
    SceneNode* repeatNode = curr;
    curr->choiceB = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene2.txt");
    curr->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.5a.txt");
    //all choiceA goes back to repeatNode
    curr->choiceA->choiceA = repeatNode;

    //scene 2 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene3.txt");
    curr->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene2a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 3 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene4.txt");
    curr->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene3a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 4 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene5.txt");
    curr->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene4a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 5 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene6.txt");
    curr->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene5a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 6 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene7.txt");
    curr->choiceA = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene6a.txt");
    
    //failCase only accesed from playScene()
    failCase = new SceneNode("../final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene8.txt");
    // delete curr;
    // delete repeatNode;
    // curr = nullptr;
    // repeatNode = nullptr;
}

void Horror::playScene(){
    setupScenes();
    SceneNode* curr = root; 

    displayScene(curr->scene); //scene 0
    curr = curr->choiceA;
    displayScene(curr->scene); //scene 1
    curr = curr->choiceA; //scene 1.5 (repeatNode)

    OutputText *output = new OutputText(); 

    string printDist = 
    "              -----"    "\n"            
    "        ---------------"     "\n"
    "    -----------------------""\n"
    "    ----               ----""\n"
    "    ----               ----""\n"
    "                    ----""\n"
    "                -----""\n"
    "                    ----""\n"
    "                       ----""\n"
    "    ----               ----""\n"
    "    ----               ----""\n"
    "    ----               ----""\n"
    "      ----           ----"   "\n"   
    "         -------------"     "\n"
    "             -----""\n";
    output->printingText(printDist,0);
    int findLastScene = 0;
    while(curr != nullptr && dollDist > 0) {
        
        if(findLastScene == 6)
        {
            displayScene(curr->scene);
            break;
        }
        
        displayScene(curr->scene);  
        
        InputText inputObject;  
        inputObject.setUserInput();

        if(inputObject.getUserInput() == 'A' || inputObject.getUserInput() =='a') {
            curr = curr->choiceA;
            displayScene(curr->scene);
            --dollDist;

            if(dollDist == 2){
                printDist = 
                "              -----"        "\n"           
                "        ---------------"     "\n" 
                "    -----------------------""\n"
                "    ----               ----""\n"
                "    ----               ----""\n"
                "                    ----""\n"
                "                -----""\n"
                "            ----""\n"
                "       ----""\n"
                "    ----""\n"
                "    ----""\n"
                "    ----""\n"
                "    ----------------------""\n"
                "    ----------------------""\n";
                output->printingText(printDist,0);
            }else if(dollDist == 1){
                printDist = 
                "           ----"      "\n"            
                "        --------"    "\n"
                "    ------------""\n"
                "    ----    ----""\n"
                "    ----    ----""\n"
                "            ----""\n"
                "            ----""\n"
                "            ----""\n"
                "            ----""\n"
                "            ----""\n"
                "            ----""\n"
                "            ----""\n"
                "    ----------------------""\n"
                "    ----------------------""\n";
                output->printingText(printDist,0);
            }
            setupScenes();
            curr = root->choiceA->choiceA;
        }
        else if(inputObject.getUserInput() == 'B' || inputObject.getUserInput() =='b') {
            findLastScene++;
            curr = curr->choiceB;
        }
        
    }
    if(dollDist <= 0){
        displayScene(failCase->scene);
    }

    delete output;
}