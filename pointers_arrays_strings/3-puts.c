#include <stdio.h>
/**
 * print_string - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void print_string(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}