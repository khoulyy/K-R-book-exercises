#include <stdio.h>

/* copying input to output, 1st version */
int main()
{
    int c;
    
    // read a character
    c = getchar();

    // while (character is not end-of-file indicator)
    while (c != EOF)
    {
        // output the character just read
        putchar(c);
        // read a character
        c = getchar();
    }
}