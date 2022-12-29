#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new lie, except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'e' && != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	reurn (0);
}
