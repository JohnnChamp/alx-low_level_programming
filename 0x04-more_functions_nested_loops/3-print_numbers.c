#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9.
 * Return Nothing
 */

void print_numbers(void)

{
	int n = 0;

	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}