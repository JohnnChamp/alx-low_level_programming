#include <stdio.h>

/**
 * main - main block
 * Description: a program that prints all the numbers of base 16
 * in lowercase followed by a new line
 * Return: 0
 */

int main(void)
{
	int c = 0;

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	char d = 'a';

	while (d <= 'f')
	{
		putchar(d);
		c++;
	}

	putchar('\n');
	return (0);
}
