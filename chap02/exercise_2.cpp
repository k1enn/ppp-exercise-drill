/*
[3] Write a program that doesn’t do anything, but declares a number of
variables with legal and illegal names (such as int double = 0;), so that you
can see how the compiler reacts.
*/
#include "PPPheaders.h"

int main()
{
    int double number = -1;
    string char = 69;
    auto 69f = "1";
    float x = "100.1";
}

/*
 * exercise_2.cpp:10:5: error: two or more data types in declaration of ‘number’
    10 |     int double number = -1;
       |     ^~~
 exercise_2.cpp:11:17: error: expected unqualified-id before ‘=’ token
    11 |     string char = 69;
       |                 ^
exercise_2.cpp:12:10: error: expected unqualified-id before numeric constant
    12 |     auto 69f = "1";
       |          ^~~
xercise_2.cpp:13:15: error: cannot convert ‘const char*’ to ‘float’ in initialization
    13 |     float x = "100.1";
       |               ^~~~~~~
       |               |
       |               const char*
exercise_2.cpp:13:11: warning: unused variable ‘x’ [-Wunused-variable]
    13 |     float x = "100.1";
 */
