#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Alwats 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch =  'z'; ch >= 'a'; ch--)
	{
		outchar(ch);
	}
	putchar('\n');
	return (0);
}
