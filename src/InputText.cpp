 #include "../header/InputText.h"

#include <iostream>
#include <string>
using namespace std;

InputText::InputText(){
    
 }

char InputText::getUserInput(){
    return option;
}

void InputText::setUserInput(char letter){
    option = letter;
}

bool InputText::validOptions(const char& choice, int numOption){
    //while (choice != 'q' || choice != 'Q'){
    if(numOption == 2){
        if(choice == '1'){
            return true;
        }
        if(choice == '2'){
            return true;
        }
    }
    if(numOption == 4){
        if(choice == 'a'){
            return true;
        }
        if(choice == 'b'){
            return true;
        }
        if(choice == 'c'){
            return true;
        }
        if(choice == 'd'){
            return true;
        }
    }
    return false;

}