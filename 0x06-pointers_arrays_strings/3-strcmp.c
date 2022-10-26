#include "main.h"

/**
* _strcmp - compare two strings.
*@s1: string 1.
*@s2: string 2.
*Return: int.
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0, cmp = 0;

	while (s1[a] != '\0' && s2[a] != '\0' && cmp == 0)
{
	cmp = s1[a] - s2[a];
	a++;
}
	return (cmp);
}
