#include "../headers/InputText.h"

#include <iostream>
#include <string>
using namespace std;

char InputText::getUserInput(){
   return option;
}

void InputText::setUserInput(){
   cin >> option;
   while(validOptions(option) ==  false){
       cout << "Please select a valid option" << endl;
       cin >> option;
   }
}

bool InputText::validOptions(const char& option){
   if(option == 'a' || option == 'A'){
       return true;
   }
   else if(option == 'b'|| option == 'B'){
       return true;
   }
   return false;
}
