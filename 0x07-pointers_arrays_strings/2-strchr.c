#include "main.h"

/**
*_strchr - function locates a character in a string.
*@c: the char to be found.
*@s: the string to search in.
*Return: a pointer to the first occurence of char c in s or NULL.
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
{
	if (s[i] == c)
	break;
	i++;
}
	if (s[i] == c)
	return (s + i);
	return (0);
}

