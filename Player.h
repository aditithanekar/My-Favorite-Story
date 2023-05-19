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
        virtual void getHappy()=0;
        virtual void getSad()=0;
        virtual void getSurprised()=0;
        virtual void getDistressed()=0;
        virtual void getLonely()=0;
        virtual void getFear()=0;
        
};