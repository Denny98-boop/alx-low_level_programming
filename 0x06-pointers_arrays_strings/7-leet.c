#include "main.h"
#include <stdio.h>

/**
 * leet - encode into 1337speak
 * @n: input value
 * @Return: n value
 */
char *leet(char *n)

{
int length_of_string, j;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (length_of_string = 0; n[length_of_string] != '\0'; length_of_string++)
{
for (j = 0; j < 10; j++)
{
if (n[length_of_string] == s1[j])
{
n[length_of_string] = s2[j]
}

}
}
return (n);

}
