#include "main.h"

/**
* print_rev - its a function that prints a string in reverse
* @s : Pointer to variable hoilding string
* Return: void
*/

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)

	_putchar(s[i]);
	_putchar('\n');
}
