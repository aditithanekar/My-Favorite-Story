#include "../headers/Scene.h"
#include "gtest/gtest.h"

TEST(SceneTests,constructorTest){
    EXPECT_NO_THROW(Scene("../final-project-kchau047-rwong095-spun003-athan014/test/sceneFileTest.txt"));

}
TEST(SceneTests,constructorInputTest){
    Scene* s = new Scene("../final-project-kchau047-rwong095-spun003-athan014/test/sceneFileTest.txt");

    EXPECT_EQ(s->getText(),"This is a test line.");
    EXPECT_EQ(s->getText(),"This is another test line.");
    EXPECT_EQ(s->getText(),"And another line.");
    EXPECT_EQ(s->getText(),"And another.");
    delete s;
}