#include "main.h"
#include <stdio.h>

/**
* swap_int - Swaps to value o ftwo integer
* @a : Pointer 1 integer
* @b : Pointer 2 integer
* Return: void
*/

void swap_int(int *a, int *b)
{
	int value = *a;
	*a = *b;
	*b = value;
}

