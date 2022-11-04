#include "main.h"

/**
*_puts_recursion - prints a string followed by a line.
*@s: string to print.
*/

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i])
{
	_putchar(s[i]);
	i++;
		_puts_recursion(s + i);
}
	else
	_putchar('\n');
}
