#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new lie, except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	pitcharc('\n');
	return (0);
}
