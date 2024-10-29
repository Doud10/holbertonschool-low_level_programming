#include "main.h"
/**
 * my_putchar - Custom implementation to print a character.
 * @c: Character to print.
 */
void my_putchar(char c)
{
write(1, &c, 1); 
}
/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts(char *str)
{
while (*str != '\0') 
{
my_putchar(*str);
str++;
}
my_putchar('\n');
}
