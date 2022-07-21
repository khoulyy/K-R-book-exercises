#include <stdio.h>

/* a program that prints its input one word per line */
int main()
{
    int c;

    while (c = getchar())
        if (c != ' ')
            putchar(c);
        else
            putchar('\n');
    printf("%i\n", c);
}