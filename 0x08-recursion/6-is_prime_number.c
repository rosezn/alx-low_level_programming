#include "main.h"

/**
 * is_is divisible - checks if a number is divisible.
 * @num: the number to be checked.
 * @div: the divisor.
 *
 * Return: if the number is divisible - 0.
 * 	if the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1); 

	return (is_divisble(num, div + 1));
}
