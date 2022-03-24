/**
 * _strncpy - copies n bytes of a sttring to a given destination
 * @dest: Where the string is to be copied to
 * @src: The original string
 * @n: Number of bytes to be copied
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	/*Find length of source*/
	while (src[len] != '\0')
		len++;

	/*Copy the n chars from the source to dest*/
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	len++;

	/*Add null bytes if the lenght of src is less than n*/
	if (len < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
