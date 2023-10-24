/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *@src: pointer to string
 *@dest: buffer to copy the string to
 Return: buffer dest
*/

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (1)
	{
		dest[counter] = src[counter];
		if (src[counter] == '\0')
		{
			break;
		}
		counter++;
	}

	return dest;
}
