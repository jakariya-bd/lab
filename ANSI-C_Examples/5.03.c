#include <stdio.h>
#include <ctype.h>

main()
{
    char letter;
    printf("Enter a letter");
    putchar('\n'); /* move to next line */
    letter = getchar();
    if( islower(letter) )
        putchar(toupper(letter)); /* Reverse and Display */
    else
        putchar(tolower(letter)); /* Reverse and Display */
}
