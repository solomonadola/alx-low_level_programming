#include "main.h"
/**
 * _islower - Shows 1 if the input is a
 * lowercase character. if not it shows
 * 0
 *
 * @c: is character
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
