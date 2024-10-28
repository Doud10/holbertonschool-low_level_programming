#include <stdio.h>
/**
 * main - Entry point of the program. Prints numbers from 1 to 100 with
 * Fizz for multiples of 3, Buzz for multiples of 5, and FizzBuzz for both.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
