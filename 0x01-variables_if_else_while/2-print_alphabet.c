#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		putchar(alphab);
	}
	putchar('\n');
	return (0);
}
