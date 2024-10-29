#include "main.h"
/**
 * reverse_string - Reverses a given string.
 * @str: Pointer to the string to be reversed.
 */
void reverse_string(char *str)
{
int start = 0;
int end = 0;
while (str[end] != '\0')
{
end++;
}
end--;
while (start < end)
{
char temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}
