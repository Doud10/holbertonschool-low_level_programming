#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function prints all lowercase letters from 'a' to 'z'
 * using only two calls to _putchar: one for the alphabet string and one
 * for the newline character.
 */
void print_alphabet(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; i < 26; i++)
{
_putchar(alphabet[i]);
}
_putchar('\n');
}
