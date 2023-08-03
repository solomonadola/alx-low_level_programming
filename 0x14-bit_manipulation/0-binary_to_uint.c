#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int
 * @b: it points to a sting of 0 and 1
 * Return: the converted number or 0
 * if there is one or more chars in the
 * string or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int length, i;

	if (!b)
	{
		return (0);
	}

	length = 0;
	result = 0;

	while (b[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else if (b[i] == '0')
		{
			result = result << 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
