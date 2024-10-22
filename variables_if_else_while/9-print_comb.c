#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 *              separated by ', ' in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 0; i < 10; i++)  // Loop through digits 0 to 9
    {
        putchar(i + '0');  // Print the digit

        if (i < 9)  // Check if it's not the last digit
        {
            putchar(',');  // Print a comma
            putchar(' ');  // Print a space
        }
    }

    putchar('\n');  // Print a new line

    return (0);  // Return 0 to indicate successful execution
}
