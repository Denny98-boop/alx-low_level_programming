#include "main.h"

/**
 * print_rev - imprime en reversa
 * @s:string
 * Return: 0
 */
void print_rev(char *s)

{
int longi = 0;
int = 0;

while (*s != '\n')
{
longi++;
s++;
}

s--;
for (o = longi; o > 0; o--) 		
{
_putchar (*s);
s--;
}

_putchar ('\n');
}
