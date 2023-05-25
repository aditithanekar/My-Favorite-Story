#include "gtest/gtest.h"
#include "../header/InputText.h"


TEST(InputTest, testOption1 ){
    InputText t;
    t.setUserInput('1');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 2));
}

TEST(InputTest, testOption2){
    InputText t;
    t.setUserInput('2');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 2));
}

TEST(InputTest, testOptionA){
    InputText t;
    t.setUserInput('a');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
}

TEST(InputTest, testOptionB){
    InputText t;
    t.setUserInput('b');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
}

TEST(InputTest, testOptionC){
    InputText t;
    t.setUserInput('c');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
}

TEST(InputTest, testOptionD){
    InputText t;
    t.setUserInput('d');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
}

TEST(InputTest, InvalidTestOption){
    InputText t;
    t.setUserInput('f');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
}

TEST(InputTest, InvalidTestScence){
    InputText t;
    t.setUserInput('3');
   // t.getUserInput();
    EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
}