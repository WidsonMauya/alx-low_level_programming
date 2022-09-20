#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - function that print string in reverse
 * @s: pointer variable
 */

void print_rev(char *s)
{
int j;
for (j = _strlen(s) - 1; j >= 0; j--)
{
_putchar(*(s + j));
}
_putchar('\n');
}
