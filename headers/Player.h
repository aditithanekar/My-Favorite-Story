#pragma once //same as ifnef, define
#include <string>
using namespace std;
class Player 
{
    private:
        string name;
    
    public:
        Player();
        Player(string inputName);
        virtual string getHappy()=0;
        virtual string getSad()=0;
        virtual string getSurprised()=0;
        virtual string getDistressed()=0;
        virtual string getLonely()=0;
        virtual string getFear()=0;
        
};