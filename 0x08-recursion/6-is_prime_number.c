#include "main.h"

/**
*prime_checker -  returns 1 if the input integer is a prime number.
*Otherwise return 0.
*@n: integer.
*@i: counter.
*Return: int.
*/

int prime_checker(int i, int n)
{

	if (i == n)
	return (1);

	else if (n % i == 0)
	return (0);

	return (prime_checker(i + 1, n));
}

/**
*is_prime_number - check if a number is prime.
*@n: integer.
*Return: int.
*/

int is_prime_number(int n)
{
	if (n < 2)
	return (0);
		return (prime_checker(2, n));
}
