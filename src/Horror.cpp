#include "../headers/Horror.h"

Horror::Horror(){
    genreName = "Horror";
    failCase = nullptr;
    dollDist = 3;
}

Horror::~Horror(){

}

void Horror::setupScenes(){
    SceneNode* curr = nullptr;
    root = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/scene0.txt");
    //no choice
    root->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.txt");
    //no choice
    curr = root->choiceA;
    curr->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.5.txt");
    curr = curr->choiceA;
    
    //scene 1.5 choices
    SceneNode* repeatNode = curr;
    curr->choiceB = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene2.txt");
    curr->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.5a.txt");
    //all choiceA goes back to repeatNode
    curr->choiceA->choiceA = repeatNode;

    //scene 2 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene3.txt");
    curr->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene2a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 3 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene4.txt");
    curr->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene3a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 4 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene5.txt");
    curr->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene4a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 5 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene6.txt");
    curr->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene5a.txt");
    curr->choiceA->choiceA = repeatNode;
    
    //scene 6 choices
    curr = curr->choiceB;
    curr->choiceB = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene7.txt");
    curr->choiceA = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene6a.txt");
    
    //failCase only accesed from playScene()
    failCase = new SceneNode("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene8.txt");
}

void Horror::playScene(){
    SceneNode* curr = root; 

    displayScene(curr->scene); //scene 0
    curr = curr->choiceA;
    displayScene(curr->scene); //scene 1
    curr = curr->choiceA; //scene 1.5 (repeatNode)

    OutputText *output = new OutputText(); 

    string printDist = 
    "            -----                   
            ---------------      
        -----------------------
        ----               ----
        ----               ----
                        ----
                    -----
                        ----
                           ----
        ----               ----
        ----               ----
        ----               ----
          ----           ----      
             -------------     
                 -----             "
    output->printingText(printDist,100);

   char input;

    while(curr != nullptr && dollDist > 0) {
        displayScene(curr->scene);  
        
        InputText inputObject;  
        inputObject.setUserInput(input);

        if(inputObject.getUserInput() == 'A' || inputObject.getUserInput() =='a') {
            curr = curr->choiceA;
            displayScene(curr->scene);
            curr = curr->choiceA;
            --dollDist;

            if(dollDist == 2){
                printDist = 
                "            -----                   
                        ---------------      
                    -----------------------
                    ----               ----
                    ----               ----
                                    ----
                                -----
                            ----
                        ----
                    ----
                    ----
                    ----
                    ----------------------
                    ----------------------    "
                output->printingText(printDist,100);
            }else if(dollDist == 1){
                printDist = 
                "           ----                  
                        --------    
                    ------------
                    ----    ----
                    ----    ----
                            ----
                            ----
                            ----
                            ----
                            ----
                            ----
                            ----
                    ----------------------
                    ----------------------    "
                output->printingText(printDist,100);
            }
        }
        else if(inputObject.getUserInput() == 'B' || inputObject.getUserInput() =='b') {
            curr = curr->choiceB;
        }
        
    }    
    if(dollDist <= 0){
        displayScene(failCase);
    }
}