#include <stdio.h>
/**
 * rot13 - Encodes a string using ROT13 substitution cipher.
 * @str: The input string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
char *ptr = str;
while (*str)
{
if ((*str >= 'a' && *str <= 'z'))
{
if (*str > 'm')
{
*str = *str - 13;
}
else
{
*str = *str + 13;
}
}
else if ((*str >= 'A' && *str <= 'Z'))
{
if (*str > 'M')
{
*str = *str - 13;
}
else
{
*str = *str + 13;
}
}
str++;
}
return (ptr);
}

int main(void)
{
char input[] = "Hello, World!";
printf("Original: %s\n", input);
rot13(input);
printf("Encoded: %s\n", input);
return (0);
}
