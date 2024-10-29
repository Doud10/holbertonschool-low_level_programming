#include <unistd.h>
/**
 * _print_reverse - Prints a string in reverse followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _print_reverse(char *str)
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
