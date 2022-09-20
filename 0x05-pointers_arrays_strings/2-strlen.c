#include "main.h"

/**
 * _strlen - function that return the length of a string
 * @s: pointer valiable
 * Return: the length of the string
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
