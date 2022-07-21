#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300 */
int main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0; /* lower limit of temperature scale */
  upper = 300; /* upper limit */
  step = 20; /* step size */

  fahr = lower;

  printf("Fahr Celsius\n");
  printf("==== =======\n");

  while (fahr <= upper)
  {
    celsius = 5 * (fahr - 32) / 9;
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}