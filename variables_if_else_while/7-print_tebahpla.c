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

    for (i = 'z'; i >= 'a'; i--)  // Loop from 'z' to 'a'
    {
        putchar(i);  // Print each character
    }

    putchar('\n');  // Print a new line

    return (0);  // Return 0 to indicate successful execution
}
