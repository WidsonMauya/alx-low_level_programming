/*
 * File: 100-print_comb3.c
 * Auth: Widson Mauya
 */

#include <stdio.h>

/**
  * main - Prints all possible combinations of two different digits,
  *           in ascending order, separated by a comma followed by a space.
  * Return: Always 0.
  */

int main(void)
{
int n, m;
for (n = 48; n <= 56; n++)
{
for (m = 49; m <= 57; m++)
if (m > n)
{
putchar(n);
putchar(m);
if (n != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');


return (0);

}
