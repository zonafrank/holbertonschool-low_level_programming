#include "main.h"

/**
 * prime_helper - helper function for recursively checking
 * for possible divisors
 * @n: number to check if it is prime
 * @i: divisor to be checked
 * Return: 1 if n is prime else 0
 */
int prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % i == 0)
		return 0;
	if (i * i > n)
		return 1;

	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to check if it is a prime number
 *
 * Return: 1 if n is prime, else 0
 */
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
