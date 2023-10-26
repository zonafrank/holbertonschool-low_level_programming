/**
 * _memcpy - copies memory area
 * @dest: the address of the memory area to copy to
 * @src: the address of the memory area to copy from
 * @n: number of items to copy from src to dest
 *
 * Return: the address of the memory area to copy to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;

	for (i = 0; i < n; i++)
	{
		*d = *src;
		src++;
		d++;
	}

	return (dest);
}
