#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: char to be checked
 * Return: 1 lowercase or 0 anyother
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);

}
