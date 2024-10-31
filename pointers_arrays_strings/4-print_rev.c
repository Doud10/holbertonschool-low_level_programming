#include <unistd.h>
/**
 * _puts_reverse - Prints a string in reverse followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void _puts_reverse(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
while (len > 0)
{
write(1, &str[len - 1], 1);
len--;
}
write(1, "\n", 1);
}
