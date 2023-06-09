#include "../headers/Dating.h"
#include "gtest/gtest.h"

TEST(DatingTests, DefaultConstructor)
{
    EXPECT_NO_THROW({
        Dating d = Dating();
    });
}
TEST(DatingTests, BeforeSetupCheckNullRoot)
{
   Dating dating = Dating();
   SceneNode* node = dating.getRoot();
   EXPECT_EQ(node, nullptr); 
   delete node;
}
TEST(DatingTests, AfterSetupCheckRootSetup)
{
   Dating dating = Dating();
   dating.setupScenes();
   SceneNode* node = dating.getRoot();
   EXPECT_NE(node, nullptr);
   delete node;
}
TEST(DatingTests, AfterSetupCheckChoices)
{
   Dating dating = Dating();
   dating.setupScenes();
   SceneNode* node = dating.getRoot();
   EXPECT_NE(node->choiceA, nullptr);
   EXPECT_NE(node->choiceB, nullptr);

}


