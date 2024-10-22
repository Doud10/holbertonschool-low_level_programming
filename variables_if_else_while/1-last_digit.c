#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number, calculates its last digit,
 *              and prints whether the last digit is greater than 5, 
 *              is 0, or is less than 6 and not 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int last_digit;
srand(time(0));  // Initialize random number generator
n = rand() - RAND_MAX / 2;  // Generate a random number
last_digit = n % 10;  // Calculate the last digit of n
printf("Last digit of %d is %d ", n, last_digit);
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);  // Return 0 to indicate successful execution
}
