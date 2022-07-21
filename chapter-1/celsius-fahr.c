#include <stdio.h>

/* print Celsius-Fahrenheit table
 * for celsius -17.8, ..., 148.7 */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -17.8; /* lower limit of temperature scale */
    upper = 148.9; /* upper limit */
    step = 11.1; /* step size */

    celsius = lower;

    printf("Celsius Fahr\n");
    printf("======= ====\n");

    while (celsius <= upper)
    {
        fahr = (celsius * 9 / 5) + 32;
        printf("%6.1f %4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}