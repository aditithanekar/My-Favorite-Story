#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include "../headers/Dating.h"
#include "../headers/Genre.h"
#include "../headers/Horror.h"
#include "../headers/InputText.h"
#include "../headers/Mint.h"
#include "../headers/OutputText.h"
#include "../headers/Player.h"
#include "../headers/Scene.h"
#include "../headers/Vanilla.h"

using namespace std;

void printGenreMenu();
void printPlayerMenu();
void printPlayAgainMenu();
void playGame(string inputGenre);

int main(){

    InputText genreInput;
    printGenreMenu();
    genreInput.setUserInput();
    cout << endl;
    InputText characterInput;
    printPlayerMenu();
    characterInput.setUserInput();
    cout << endl;
    if(characterInput.getUserInput() == 'a' || characterInput.getUserInput() == 'A'){
        Vanilla userCharacter;
    }
    else{
        Mint userCharacter;
    }

    if(genreInput.getUserInput() == 'a' || genreInput.getUserInput() == 'A'){
        playGame("Dating");
        InputText playAgain;
        printPlayAgainMenu();
        playAgain.setUserInput();
        cout << endl;
        while(playAgain.getUserInput() != 'b' && playAgain.getUserInput() != 'B'){
            playGame("Dating");
        }
    }

    else {
        playGame("Horror");
        InputText playAgain;
        printPlayAgainMenu();
        playAgain.setUserInput();
        cout << endl;
        while(playAgain.getUserInput() != 'b' && playAgain.getUserInput() != 'B'){
            playGame("Horror");
        }
    }  
    return 0;
}

void printGenreMenu(){
    cout << endl << "MY FAVORITE STORY" << endl;
    cout << endl;
    cout << "Choose your story genre:" << endl;
    cout << "a. Dating" << endl;
    cout << "b. Horror" << endl;
    cout << "Please select an option: " << endl;
}

void printPlayerMenu(){
    cout << "Choose your character:" << endl;
    cout << "a. Vanilla" << endl;
    cout << "b. Mint" << endl;
    cout << "Please select an option: " << endl;
}

void printPlayAgainMenu(){
    cout << "Would you like to play again?" << endl;
    cout << "a. Yes, give me another try!" << endl;
    cout << "b. No, thank you. Quit." << endl;
    cout << "Please select an option: " << endl;
}

void playGame(string inputGenre){
    if(inputGenre == "Dating"){
        Dating userGenre;
        userGenre.setupScenes();
        userGenre.playScene();
    }
    else{
        Horror userGenre;
        userGenre.setupScenes();
        userGenre.playScene();
    }
}