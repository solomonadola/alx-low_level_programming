#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - it prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int a,b;
	b = 122;

	for (a = 97; a <= b; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}
