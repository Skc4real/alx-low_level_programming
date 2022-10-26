#include "main.h"

/**
*_strcat - a function that concatinate 2 strings.
*@dest: first string.
*@src: second string.
*Return: string.
*/

char *_strncat(char *dest, char *src, int n)
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
