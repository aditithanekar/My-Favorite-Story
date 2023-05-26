#include "../headers/Vanilla.h"
#include "gtest/gtest.h"

TEST(VanillaTests, testDefaultConstructor){
    EXPECT_NO_THROW(Vanilla test());
}

TEST(VanillaTests, testConstructor){
    EXPECT_NO_THROW(Vanilla test("Vanilla"));
}

TEST(VanillaTests, testHappy){
    Vanilla test("Vanilla");
    EXPECT_EQ(test.getHappy(), "Hurray! I'm so excited.");
}

TEST(VanillaTests, testSad){
    Vanilla test("Vanilla");
    EXPECT_EQ(test.getSad(), "Aw man, this sucks.");
}

TEST(VanillaTests, testSurprised){
    Vanilla test("Vanilla");
    EXPECT_EQ(test.getSurprised(), "Whoa! I didn't expect that.");
}

TEST(VanillaTests, testDistressed){
    Vanilla test("Vanilla");
    EXPECT_EQ(test.getDistressed(), "Ugh, this is terrible.");
}

TEST(VanillaTests, testLonely){
    Vanilla test("Vanilla");
    EXPECT_EQ(test.getLonely(), "I feel so alone right now.");
}

TEST(VanillaTests, testFear){
    Vanilla test("Vanilla");
    EXPECT_EQ(test.getFear(), "AAAAAA!");
}