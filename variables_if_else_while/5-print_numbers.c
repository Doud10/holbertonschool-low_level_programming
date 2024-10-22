#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 starting from 0,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)  // Loop from 0 to 9
{
putchar(i + '0');  // Convert the integer to a character and print it
}
putchar('\n');  // Print a new line
return (0);  // Return 0 to indicate successful execution
}
