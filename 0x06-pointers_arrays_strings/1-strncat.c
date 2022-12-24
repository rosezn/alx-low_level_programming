#include "main.h"

/**
 * _strncate - concatenates two strings using at most
 * an inputted number of bytes fromsrc.
 * @dest: the string to be appended uon.
 * @src: the string to be appended to dest.
 * @n: the number of bytes from src to be appended o dest.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
