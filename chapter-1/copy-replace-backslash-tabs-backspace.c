#include <stdio.h>

/* copy input to output, replace tab by \t, backspace by \b, and backslash by \\ */
int main()
{
    int c;
    while (c = getchar() != EOF)
    {
        if (c == '\t')
        {
            putchar('\\');
            putchar("t");
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
}