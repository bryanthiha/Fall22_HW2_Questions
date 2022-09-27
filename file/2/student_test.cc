#include <iostream>
#include <string>

#include "gtest/gtest.h"
#include "q.h"

//-----------------------------------------------------------------------------
// Write several test cases for each function.
// Make sure you cover all corner cases!
//-----------------------------------------------------------------------------

TEST(IndexOfFirstSpace, given_case)
{
    std::string test = "This is a test";

    int actual_index = IndexOfFirstSpace(test);
    int expected = 4;

    EXPECT_EQ(expected,actual_index);
}

TEST(IndexOfFirstSpace, no_spaces)
{
    std::string test = "hello";

    int actual_index = IndexOfFirstSpace(test);
    int expected = -1;

    EXPECT_EQ(expected,actual_index);
}

TEST(IndexOfFirstSpace, first_character_space)
{
    std::string test = " Welcome";

    int actual_index = IndexOfFirstSpace(test);
    int expected = 0;

    EXPECT_EQ(expected,actual_index);
}

TEST(IndexOfFirstSpace, last_character_space)
{
    std::string test = "Welcome ";

    int actual_index = IndexOfFirstSpace(test);
    int expected = 7;

    EXPECT_EQ(expected,actual_index);
}




TEST(SeparateFirstAndLastNames, my_name)
{
    std::string full_name = "Bryan Thiha";
    std::string first_name, last_name;

    SeparateFirstAndLastNames(full_name, first_name, last_name);

    EXPECT_EQ(first_name, "Bryan");
    EXPECT_EQ(last_name, "Thiha");
}

TEST(SeparateFirstAndLastNames, one_letter_f_name)
{
    std::string full_name = "J Thiha";
    std::string first_name, last_name;

    SeparateFirstAndLastNames(full_name, first_name, last_name);

    EXPECT_EQ(first_name, "J");
    EXPECT_EQ(last_name, "Thiha");
}

TEST(SeparateFirstAndLastNames, one_letter_l_name)
{
    std::string full_name = "Jackson A";
    std::string first_name, last_name;

    SeparateFirstAndLastNames(full_name, first_name, last_name);

    EXPECT_EQ(first_name, "Jackson");
    EXPECT_EQ(last_name, "A");
}

TEST(SeparateFirstAndLastNames, invalid_string)
{
    std::string full_name = "hello";
    std::string first_name, last_name;

    SeparateFirstAndLastNames(full_name, first_name, last_name);

    EXPECT_EQ(first_name, "");
    EXPECT_EQ(last_name, "");
}




TEST(NumberOfVowels, phrase)
{
    std::string test = "This is a test";

    int actual = NumberOfVowels(test);
    int expected = 4;

    EXPECT_EQ(expected,actual);
}

TEST(NumberOfVowels, case_insensitivity_test)
{
    std::string test = "hElLo wOrlD";

    int actual = NumberOfVowels(test);
    int expected = 3;

    EXPECT_EQ(expected,actual);
}




TEST(NumberOfConsonants, test_phrase)
{
    std::string test = "This is a test";

    int actual = NumberOfConsonants(test);
    int expected = 7;

    EXPECT_EQ(expected,actual);
}

TEST(NumberOfConsonants, case_insensitivity_test)
{
    std::string test = "hElLo, wOrlD!";

    int actual = NumberOfConsonants(test);
    int expected = 7;

    EXPECT_EQ(expected,actual);
}

TEST(NumberOfConsonants, one_word_string)
{
    std::string test = "Bryan";

    int actual = NumberOfConsonants(test);
    int expected = 4;

    EXPECT_EQ(expected,actual);
}



TEST(Reverse, example_case)
{
    std::string test = "ted";
    Reverse(test);

    EXPECT_EQ(test, "det");
}

TEST(Reverse, even_num_characters)
{
    std::string test = "Welcome!";
    Reverse(test);
    
    EXPECT_EQ(test, "!emocleW");
}