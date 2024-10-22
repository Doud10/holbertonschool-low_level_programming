#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)  // Loop to print lowercase letters
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)  // Loop to print uppercase letters
putchar(ch);
putchar('\n');  // Print a new line
return (0);
}
