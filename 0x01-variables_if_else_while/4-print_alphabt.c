#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char alphab = 'a';

	while (alphab <= 'z')
	{
		if (alphab == 'e' || alphab == 'q')
		{
			alphab++;
			continue;
		}
		putchar(alphab++);
	}
	putchar('\n');
	return (0);
}
