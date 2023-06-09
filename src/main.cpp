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
void playGame(string inputGenre, Player *character);

int main(){
    printGenreMenu();
    InputText genreInput;
    genreInput.setUserInput();
    cout << endl;

    printPlayerMenu();
    InputText characterInput;
    characterInput.setUserInput();
    cout << endl;
  
    Player* userCharacter;
    if(characterInput.getUserInput() == 'a' || characterInput.getUserInput() == 'A'){
        userCharacter = new Vanilla();
    }
    else{
        userCharacter = new  Mint();
    }

    if(genreInput.getUserInput() == 'a' || genreInput.getUserInput() == 'A'){
        playGame("Dating",userCharacter);
        printPlayAgainMenu();
        InputText playAgain;
        playAgain.setUserInput();
        cout << endl;

        while(playAgain.getUserInput() != 'b' && playAgain.getUserInput() != 'B'){
            printPlayAgainMenu();
            playAgain.setUserInput();
            playGame("Dating", userCharacter);
            printPlayAgainMenu();
            playAgain.setUserInput();
            cout << endl;
        }
    }
    else {
        playGame("Horror", userCharacter);
        printPlayAgainMenu();
        InputText playAgain;
        playAgain.setUserInput();
        cout << endl;
        
        while(playAgain.getUserInput() != 'b' && playAgain.getUserInput() != 'B'){
            printPlayAgainMenu();
            playAgain.setUserInput();
            playGame("Horror", userCharacter);
            printPlayAgainMenu();
            playAgain.setUserInput();
            cout << endl;
        }
    }  
    delete userCharacter;
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

void playGame(string inputGenre, Player *character){
    if(inputGenre == "Dating"){
        Dating userGenre;
        userGenre.setupScenes();
        userGenre.playScene(character);
    }
    else{
        Horror userGenre;
        userGenre.playScene(character);
    }
}