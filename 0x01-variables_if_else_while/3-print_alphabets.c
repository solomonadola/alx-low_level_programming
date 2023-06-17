#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphab;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
		putchar(alphab);
	for (alphab = 'A'; alphab <= 'Z'; alphab++)
		putchar(alphab);
	putchar('\n');
	return (0);
}
