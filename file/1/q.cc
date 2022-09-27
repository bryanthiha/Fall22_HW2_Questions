#include "q.h"

#include <cmath>
#include <iostream>
#include <list>
#include <string>
#include <vector>
// TODO:
// 1. Implement the the functions in q.h.
// 2. Write some unit tests for them in student_test.cc


int CountCharacters(std::string& input, std::vector<char> characters)
{
    if(input.empty() || characters.empty()){ return 0;}

    int case_insensitive = 'a' - 'A';      // ASCII Conversion diffirence btwn upper and lower case
    int char_count = 0;

    for(char elem : characters)  // for every element in both string and vector, change to lowercase for comparison
    {
        if(elem >= 'A' && elem <= 'Z') { elem += case_insensitive; }

        for(char i : input)
        {
            if(i >= 'A' && i <= 'Z') { i += case_insensitive; }
            if(i == elem) {char_count++;}
        }
    }
    return char_count; 
}
