#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: destination string pointer
 *@src: source string pointer
 *Return: pointer to destination string
 */

char *_strcat(char *dest, char *src)
{
int length_of_string, j;

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
length_of_string++;
}

j = 0;
while (src[j] != '\0')
{
dest[length_of_string] = src[j];
j++;
length_of_string++;
}
dest[length_of_string] = '\0';
return (dest);
}
