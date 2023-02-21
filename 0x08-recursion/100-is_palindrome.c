#include "main.h"

/**
 * find_strlen - returns the length of a string.
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}
