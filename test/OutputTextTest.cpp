#include "gtest/gtest.h"
#include "../header/OutputText.h"


TEST(OutputTest, testString) {
    OutputText t;
    string text = "Hello World!";
    t.printingText(text);
    EXPECT_STREQ("Hello World!","Hello World!");
}

TEST(OutputTest, testString2) {
    OutputText t;
    string text = "Today is Saturday";
    t.printingText(text);
    EXPECT_STREQ("Today is Saturday","Today is Saturday");
}

TEST(OutputTest, testString3) {
    OutputText t;
    string text = "1234567890";
    t.printingText(text);
    EXPECT_STREQ("Today is Saturday","1234567890");
}

