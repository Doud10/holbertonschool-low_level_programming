#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line, without using char variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)  // Loop from 0 to 9
{
putchar(i + '0');  // Print the digit as a character
}

putchar('\n');  // Print a new line

return (0);  // Return 0 to indicate successful execution
}
