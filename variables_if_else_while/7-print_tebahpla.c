#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse order,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
