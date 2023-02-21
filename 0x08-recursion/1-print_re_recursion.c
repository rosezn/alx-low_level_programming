#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: the string to be printed. 
 */

voud _print_rev_recursion(char *s)
{
	if(*s)
	{
		_printrev_recursion(s + 1);
		_putchar(*s);
	}
}
