#include <stdio.h>

/* copy input to output, replace one or more blanks with a single blank */
int main()
{
    int c;

    while (c = getchar() != EOF)
    {
        if (c  == ' ')
        {
            putchar(' ');
            while (c = getchar() == ' ')
                ;
        }
        if (c != EOF)
            putchar(c);
    }
}