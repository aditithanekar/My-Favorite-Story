#include "gtest/gtest.h"
#include "Genre.h"

TEST(ConstructorTests, testNoThrows) {
    EXPECT_NO_THROW(Genre("Horror"))
}

TEST(GetterTests, testNames) {
    Genre genre = new Genre("Horror");
    EXPECT_STR_EQ(genre.getGenreName(), "Horror");
}
