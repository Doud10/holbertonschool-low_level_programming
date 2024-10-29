#include <unistd.h>
/**
 * _print_reverse - Prints a string in reverse followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void print_rev(char *s);
{
char *start = str;
while (*str)
{
str++;
}
str--;
while (str >= start)
{
write(1, str, 1);
str--;
}
write(1, "\n", 1);
}
