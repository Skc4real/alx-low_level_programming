#include "main.h"
#include <stdio.h>

/**
* _puts - Prints a strint followed by a new line
* @str : Pointer that hold the string of the variable
* Return: void
*/

void _puts(char *str)
{
	while (*str)

	_putchar(*str++);
	_putchar('\n');
}
