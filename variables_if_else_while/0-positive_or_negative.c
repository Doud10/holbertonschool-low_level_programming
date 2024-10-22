#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));  // Initialize random number generator
    n = rand() - RAND_MAX / 2;  // Generate a random number

    if (n > 0)
    {
        printf("%d is positive\n", n);  // If n is positive, print this
    }
    else if (n == 0)
    {
        printf("%d is zero\n", n);  // If n is zero, print this
    }
    else
    {
        printf("%d is negative\n", n);  // If n is negative, print this
    }

    return (0);  // Return 0 to indicate successful execution
}
