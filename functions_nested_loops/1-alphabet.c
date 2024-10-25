#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to print
 *
 * Return: On success, returns 1.
 * On error, returns -1, and errno is set appropriately.
 *
 * Description: This function uses the POSIX write system call to
 * output a single character to the standard output.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
