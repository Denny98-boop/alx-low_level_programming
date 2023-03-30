#include "main.h"

/**
 *_strncat - function that concatenates two strings
 *@dest: destination string pointer
 *@src: source string pointer
 *@n: number of bytes to be concatenated
 *Return: pointer to destination string
 */


char *_strncat(char *dest, char *src, int n)
{
int length_of_string, j;
/* j is a counter for n bytes of src to be concatenated */
/* length_of_string = length of destination string */

length_of_string = 0;
while (dest[length_of_string] != '\0')
{
	length_of_string++;
}
for (j = 0; j < n && src[j] != '\0'; j++, length_of_string++)
{
	dest[length_of_string] = src[j];
}
dest[length_of_string] = '\0';
return (dest);
}

