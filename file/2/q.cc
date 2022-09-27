#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc


// Returns the index of the fist space character in a string.
int IndexOfFirstSpace(std::string& input)
{
    int index = 0;
    while(index < input.length())       // break once space is detected
    {
        if(input[index] == ' ') { break; }
        index++;
    }

    // Detect when string has no spaces
    if(index == input.length()) { std::cout << "Input has no spaces" << std::endl; return -1;}

    return index;
}


// Given the full_name, it returns the first_name and last_name.
// Return type is void cuz we passing in original strings as reference. 
// All changes will be reflected after function performed on strings.
void SeparateFirstAndLastNames(std::string& full_name, std::string& first_name, std::string& last_name)
{
    int space = IndexOfFirstSpace(full_name);   // use space index as separation marker

    if(space != -1)                                     // Detect if string in valid format
    {
        // load index 0 - space in first name
        for(int i = 0; i < space; i++) { first_name += full_name[i]; }

        // load index after space to last index into l_name
        for(int i = space + 1; i < full_name.length(); i++) { last_name += full_name[i]; } 
    }
}


// Returns the number of vowels (a, e, i, o, u) in a string. Case Insensitive
int NumberOfVowels(std::string& input)
{
    int case_insensitive = 'a' - 'A';
    int vowels_count = 0;

    for(char elem : input)
    {
        if(elem >= 'A' && elem <= 'Z') { elem += case_insensitive; }

        if(elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u') { vowels_count++; }
    }
    return vowels_count;
}

// Returns the number of consonants (letters that are not a, e, i, o, u) in a string. Case Insensitive
int NumberOfConsonants(std::string& input)
{
    int case_insensitive = 'a' - 'A';
    int consonant_count = 0;

    for(char elem : input)
    {
        if(elem >= 'A' && elem <= 'Z') { elem += case_insensitive; }

        if(elem > 'a' && elem <= 'z' && elem != 'e' && elem != 'i' && elem != 'o' && elem != 'u') { consonant_count++; }
    }
    return consonant_count;
}


// Reverse characters in a given string
int Reverse(std::string& input)
{
    int len = input.length();
    int mid = len/2;
    int temp = 0;

    for(int i = 0; i < mid; i++)
    {
        temp = input[i];
        input[i] = input[len - 1 - i];
        input[len - 1 - i] = temp;
    }
    return 0;
}