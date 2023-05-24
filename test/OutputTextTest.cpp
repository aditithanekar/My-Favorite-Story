#include "gtest/gtest.h"
#include "../header/OutputText.h"


TEST(OutputTest, testString) {
    OutputText t;
    string text = "Hello World!";
    int delay_ms = 100; // Delay in milliseconds
    t.printingText(text, delay_ms);
    EXPECT_STREQ("Hello World!","Hello World!");
}