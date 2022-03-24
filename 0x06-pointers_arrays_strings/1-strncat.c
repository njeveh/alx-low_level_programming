/**
 * _strncat - copies n bytes from speciified string
 * @dest: where to copy to.
 * @src: where to copy from.
 * @n: number of bytes to copy
 *
 * Return: the new dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0, start;

	while (dest[len] != '\0')
		len++;
	start = len++;

	while (i < n && src[i] != '\0')
	{
		dest[start] = src[i];
		i++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}
