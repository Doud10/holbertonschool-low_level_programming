#include "main.h"
/**
 * print_numbers_ten_times - Prints the numbers from 0 to 14, 10 times.
 */
void print_numbers_ten_times(void)
{
int i, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
_putchar(i + '0');
if (i > 9)
{
_putchar((i / 10) + '0');
putchar((i % 10) + '0');
}
}
_putchar('\n');
}
}
