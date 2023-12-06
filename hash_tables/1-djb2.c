/**
 * hash_djb2 - Hashes a string using the djb2 algorithm.
 *
 * @str: The input string to be hashed.
 *
 * Return: The hash value of the input string.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
