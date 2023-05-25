#include "../headers/Mint.h"
#include "gtest/gtest.h"

TEST(MintTests, testDefaultConstructor){
    EXPECT_NO_THROW(Mint test());
}

TEST(MintTests, testConstructor){
    EXPECT_NO_THROW(Mint test("Mint"));
}

TEST(MintTests, testHappy){
    Mint test("Mint");
    EXPECT_EQ(test.getHappy(), "Yippee, I guess...");
}

TEST(MintTests, testSad){
    Mint test("Mint");
    EXPECT_EQ(test.getSad(), "Wow, my life is just sad.");
}

TEST(MintTests, testSurprised){
    Mint test("Mint");
    EXPECT_EQ(test.getSurprised(), "Oh no, you scared me.");
}

TEST(MintTests, testDistressed){
    Mint test("Mint");
    EXPECT_EQ(test.getDistressed(), "Ugh, I hate feeling like this.");
}

TEST(MintTests, testLonely){
    Mint test("Mint");
    EXPECT_EQ(test.getLonely(), "No way, I've never felt alone before.");
}

TEST(MintTests, testFear){
    Mint test("Mint");
    EXPECT_EQ(test.getFear(), "I'm so scared right now. No, I'm not joking.");
}