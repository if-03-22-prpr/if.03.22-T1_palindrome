/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class>
 * ---------------------------------------------------------
 * Exercise Number: T1
 * Title:			Palindrome
 * Author:			*/<your name>/*
 * ----------------------------------------------------------
 * Description:
 * Recursive and iterative implementation of a palindrome detector
 * ----------------------------------------------------------
 */

#include "palindrome.h"

/* 
    INSTRUCTIONS

    Palindromes are words (or texts) that can be read from left to right and right to left,
    e.g. 'OTTO'.

    Implement two functions that take (at least) a string and 
    return `true` if that string is a Palindrome:
    1) Iterative implementation
    2) Recursive implementation

    3) Complete the function `check_palindrome` in a way, that it 
    invoke BOTH functions described above according to the specification 
    of the function.

    4) Compile and run the program to check its output.
    The build shall not cause errors or warnings when compiled with '-Wall -pedantic' options.
*/

/* DO NOT CHANGE - configuration for running and testing the functions */
#ifndef BUILD_ALL
static char* texts[] = {
    "X",
    "SOS",
    "SSO",
    "ubuntu",
    "otto",
    "REAR",
    "palindrome",
    "step on no pets"
};

int main(int argc, char* argv[])
{
    int text_cnt = sizeof(texts) / sizeof(texts[0]);
    for (int i = 0; i < text_cnt; i++) {
        printf("Checking \"%s\": ", texts[i]);
        bool it_res = check_palindrome(texts[i], strlen(texts[i]), false);
        bool rec_res = check_palindrome(texts[i], strlen(texts[i]), true);
        printf("iteration says: %s, %s says recursion\n", (it_res ? "YES" : "NO"), (rec_res ? "YES" : "NO"));
    }
}
#endif

/* -------------------------------------------------------------------*/
/*  ALL CHANGES BELOW                                                 */

/* your iterative function goes here */

/* your recursive function goes here */

/**
 * Umbrella function that invokes
 * - the iterative variant of the palindrome checking function
 * - or the recursive variant of the same
 * for the given text of the given length depending on `recursive` flag.
 * 
 * @param text The text to check. 
 * @param length The length of the given text.
 * @param recursive True if the recursive variant shall be used, false for the iterative variant.
 * @return True if the given text is a palindrome, false otherwise.
 */
bool check_palindrome(char* text, int length, bool recursive) {
    return (recursive 
        ? /* invoke your recursive function */
        : /* invoke your iterative function */
    );
}
