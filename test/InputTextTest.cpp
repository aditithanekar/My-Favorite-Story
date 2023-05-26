#include "gtest/gtest.h"
#include "../headers/InputText.h"




TEST(InputTest, testOption2A){
   InputText t;
   //t.setUserInput();
  // t.getUserInput();
   EXPECT_TRUE(t.validOptions('a'));
}


// TEST(InputTest, testOption2a){
//     InputText t;
//     t.setUserInput('a');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 2));
// }


// TEST(InputTest, testOption2B){
//     InputText t;
//     t.setUserInput('B');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 2));
// }


// TEST(InputTest, testOption2b){
//     InputText t;
//     t.setUserInput('b');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 2));
// }


// TEST(InputTest, testOption4a){
//     InputText t;
//     t.setUserInput('a');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, testOption4b){
//     InputText t;
//     t.setUserInput('b');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, testOption4c){
//     InputText t;
//     t.setUserInput('c');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, testOption4d){
//     InputText t;
//     t.setUserInput('d');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, testOption4A){
//     InputText t;
//     t.setUserInput('A');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, testOption4B){
//     InputText t;
//     t.setUserInput('B');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, testOption4C){
//     InputText t;
//     t.setUserInput('C');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, testOption4D){
//     InputText t;
//     t.setUserInput('D');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, InvalidTestOption){
//     InputText t;
//     t.setUserInput('f');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }


// TEST(InputTest, InvalidTestScence){
//     InputText t;
//     t.setUserInput('3');
//    // t.getUserInput();
//     EXPECT_TRUE(t.validOptions(t.getUserInput(), 4));
// }
