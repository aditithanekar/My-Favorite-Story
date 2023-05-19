//#include gtest
//only rose will make cmake and then later merge 
TEST(PlayerConstructor, DefaultConstructor)
{
    EXPECT_NO_THROW(Player("Vanilla"));
}
TEST(PlayerConstructor, ParametrizedConstructor)
{
    EXPECT_NO_THROW(Player());
}