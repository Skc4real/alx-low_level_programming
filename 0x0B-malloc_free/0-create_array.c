#include "main.h"
#include <stdlib.h>

/**
*create_array - creates an array of chars
*@size: size of arrray.
*@c: char.
*Return: pointer to char if success.
*/

char *create_array(unsigned int size, char c)
{
	char *tmp = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || tmp == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	tmp[i] = c;
	return (tmp);
}
