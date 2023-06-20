#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - it prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int a;

	a = 65;

	while (a <= 122)
	{
		_putchar(a++);
	}

	_putchar('\n');
}
