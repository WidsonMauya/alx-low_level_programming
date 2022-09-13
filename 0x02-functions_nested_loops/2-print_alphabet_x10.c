#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * Return: On success 0
 */

void print_alphabet_x10(void)
{
int n;
char ch;
for (n = 0; n < 10; n++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
