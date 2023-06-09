#include <stdio.h>
#include <stdbool.h>

// https://man7.org/linux/man-pages/man5/terminal-colors.d.5.html
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"

static bool balanced(char* string)
{
    //todo: Implement this function such that it returns whether a string containing braces is balanced.
    //todo: A balanced string has a closed brace for every open brace and an open brace for every closed brace.
    //todo: Furthermore, the open brace in a pair should always come somewhere before the close brace.
    //todo: See if you can get all the test cases in main to pass.
    return false;
}

static void test_balanced(char* string, bool expected)
{
    bool result = balanced(string);
    if (result == expected) {
        printf(ANSI_COLOR_GREEN "PASS" ANSI_COLOR_RESET);
    } else {
        printf(ANSI_COLOR_RED "FAIL" ANSI_COLOR_RESET);
    }

    printf(": '%6s' %s balanced\n", string, result ? "is" : "is not");
}

int main()
{
    bool result;

    // Test balanced braces
    test_balanced("{}{}{}", true);
    test_balanced("{{{}}}", true);
    test_balanced("{{}{}}", true);
    test_balanced("{h}{i}", true);
    test_balanced("{{hi}}", true);
    test_balanced("", true);

    // Test unbalanced braces
    test_balanced("}{}{}{", false);
    test_balanced("{}}{{}", false);
    test_balanced("{}{}}", false);
    test_balanced("{{}{}", false);
    test_balanced("{}{}{", false);
    test_balanced("}{}{}", false);
}
