#include "../headers/Horror.h"

Horror::Horror(/* args */){
    genreName = "Horror";
}

Horror::~Horror(){

}

void setupScenes(){
    scenes[0] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/scene0.txt");
    scenes[1] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.txt");
    scenes[2] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene1.5.txt");
    scenes[3] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene2.txt");
    scenes[4] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene3.txt");
    scenes[5] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene4.txt");
    scenes[6] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene5.txt");
    scenes[7] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene6.txt");
    scenes[8] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene7.txt");
    scenes[9] = new Scene("/home/csmajs/rwong095/final-project-kchau047-rwong095-spun003-athan014/storyFiles/horror/scene8.txt");
}

void playScene(){
    Scene *currScene = scenes[0]; //how to know scene #?
    OutputText *output = new OutputText(); 

    //print out all text from currScene
    string str = currScene->getText();
    while(str != ""){
        output->printingText(str,100);
        currScene.getText();
    }
    //how to get input for only the scenes that have inputs
    //how to get to next scene?
    //hardcode array indexes??
}