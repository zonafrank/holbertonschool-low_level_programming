/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_m = n ^ m;
	unsigned int bit_count = 0;

	while (n_xor_m)
	{
		bit_count += n_xor_m & 1;
		n_xor_m >>= 1;
	}

	return (bit_count);
}
