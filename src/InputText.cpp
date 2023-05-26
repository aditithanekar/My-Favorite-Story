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
         if(choice == 'a' || choice == 'A'){
            return true;
        }
        if(choice == 'b'|| choice == 'B'){
            return true;
        }
    }
    if(numOption == 4){
        if(choice == 'a' || choice == 'A'){
            return true;
        }
        if(choice == 'b'|| choice == 'B'){
            return true;
        }
        if(choice == 'c'|| choice == 'C'){
            return true;
        }
        if(choice == 'd'|| choice == 'D'){
            return true;
        }
    }
    return false;

}