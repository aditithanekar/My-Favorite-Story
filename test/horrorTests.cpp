#include "gtest/gtest.h"
#include "../headers/Horror.h"

TEST(HorrorTests, horrorConstructorTest) {
    EXPECT_NO_THROW(Horror());
}

TEST(HorrorTests, getNameTest) {
    Horror *horrorObject = new Horror();
    //EXPECT_STREQ(horrorObject->getGenreName(), "Horror");
}

TEST(HorrorTests, playSceneTest){
    Horror *horrorObject = new Horror();
    //EXPECT_NO_THROW(horrorObject->playScene());
}