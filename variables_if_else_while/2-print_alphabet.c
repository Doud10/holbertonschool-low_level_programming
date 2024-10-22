#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)  // Loop through 'a' to 'z'
{
putchar(ch);  // Print each character
}
putchar('\n');  // Print new line
return (0);
}
