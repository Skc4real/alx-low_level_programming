#include "main.h"

/**
*_strcat - function that concatinate 2 strings.
* @dest: first string.
* @src: second string.
* Return: string.
*/

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	a++;

	while (src[b] != '\0')
{
	dest[a] = src[b];
	a++;
	b++;
}
	dest[a] = '\0';
	return (dest);
}
