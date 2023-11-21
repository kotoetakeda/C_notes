#include <stdio.h> // for input and output functions

int main() {
    /* VARIABLES
        >> type variableName = value;
        types:
        - int = %d
        - string = %s
        - char = %c
        - pointer = %p
        - float = %f
    */
    int nums = 15;
    printf("%d\n", nums); // must include the format specifiers when printing variables

    /* ESPACE SEQUENCES
    - \n    newline
    - \t    new tab
    - \\    backslash
    - \"    to insert a quotation mark
    */
    printf("\tI am one tab after");
    printf("\nI get my own line\n");
    printf("\"I am inside quotation marks\"");
    printf("\\I am a backslash");
    // strcpy(char* destination, char* source);
    return 0; // ends main function
}

