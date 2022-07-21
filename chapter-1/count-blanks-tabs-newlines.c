#include <stdio.h>

/* count blanks, tabss, and newlines in input */
int main()
{
    int c, blank, tab, newline;

    while (c = getchar() != EOF)
        if (c == ' ')
            ++blank;
        else if (c == '\t')
            ++tab;
        else if (c == '\n')
            ++newline;
    printf("%i %i %i\n", blank, tab, newline);
}