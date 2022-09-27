#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(CountCharacters, given_case)
{
    std::string test = "This is a test";
    std::vector<char> characters = {'t','H'};

    int actual_count = CountCharacters(test, characters);
    int expected = 4;

    EXPECT_EQ(expected,actual_count);
}

TEST(CountCharacters, empty_vector)
{
    std::string test = "This is a test";
    std::vector<char> characters = {};

    int actual_count = CountCharacters(test, characters);
    int expected = 0;

    EXPECT_EQ(expected,actual_count);
}

TEST(CountCharacters, large_vector)
{
    std::string test = "WELCOME to my world";
    std::vector<char> characters = {'t','H', 'w', 'D', 'o', 'm'};

    int actual_count = CountCharacters(test, characters);
    int expected = 9;

    EXPECT_EQ(expected,actual_count);
}