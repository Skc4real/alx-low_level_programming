#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
*@size: size of a square matrix.
*@a: the matrix.
*/

void print_diagsums(int *a, int size)
{
	int i;
	long int sum  = 0, sizem;
	sizem = size * size;

	for (i = 0; i < sizem; i += size + 1)
	sum += a[i];
	printf("%li, ", sum);
		sum = 0;

	for (i = size - 1; i <= sizem - size + 1; i += size - 1)
	sum += a[i];
	printf("%li\n", sum);
}
