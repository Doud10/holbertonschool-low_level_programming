#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)  // Loop to print 0-9
    {
        putchar(i + '0');  // Convert integer to character
    }

    for (i = 10; i < 16; i++)  // Loop to print a-f
    {
        putchar(i - 10 + 'a');  // Convert integer to corresponding hex character
    }

    putchar('\n');  // Print a new line

    return (0);  // Return 0 to indicate successful execution
}
