#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the backslash character should be printed,
 *     representing the length of the diagonal line.
 */
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
