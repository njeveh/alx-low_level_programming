#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _islower - checks for lowercase
 * @c: c is an ascii character
 *
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		}
		else
		{
			return (0);
			}
}

/**
 * _isalpha - checks for alphabetic character
 * @c: c is an ascii character
 *
 * Return: 1 (if letter)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		}
		else if (c >= 'A' && c <= 'Z')
		{
			return (1);
			}
			else
			{
				return (0);
				}
}

/**
 * _abs - computes the absolute value of an integer
 * @n: n is an integer
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
		}
		else if (n < 0)
		{
			return (-n);
			}
			else
			{
				return (n);
				}
}

/**
 * _isupper - checks for uppercase character
 * @c: is an ascii character
 *
 * Return: 1 if c is uppercase or 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
		}
		else
		{
			return (0);
			}
}

/**
 * _isdigit - checks whether passed character is a digit
 * @c: character being checked
 *
 *Return: 1 if it is else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	   return (1);
	   else
		return (0);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 *
 *Return: an integer value; the length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		++i;
			++s;
			}
			return (i);
}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: a pointer to a string
 *
 *Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
			++str;
			}
			_putchar(10);
}

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

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: secong string to be compared
 *
 * Return: 0 if equal, -1 if s1 is less than s2, 1 if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, ret;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] == s2[i])
		   	  continue;
				else
						break;
						}

						ret = s1[i] - s2[i];
						return (ret);
}

#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: pointer to a string
 * @src: pointer to a string
 *
 *Return: string pointer
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	char *temp;

	dest_len = strlen(dest);
	temp = dest;
	temp += dest_len;

	while (*src != '\0')
	{
		*temp = *src;
		      ++temp;
			++src;
			}
			*temp = '\0';
			return (dest);
}

/**
 * _atoi - undefined
 * @s: pointer to a string
 *
 *Return: int
 */

int _atoi(char *s)
{
	return;
}

/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to destination string
 * @src: pointer to source string
 *
 *Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src != '\0')
	{
		*temp = *src;
		      ++src;
			++temp;
			}
			*temp = '\0';
			return (dest);
}

/**
 * *_memset - fills memory with a constant byte
 * @s: area to be filled
 * @b: constant to be filled
 * @n: number of bytes of s to be filled
 *
 * Return: pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		}
		return (s);
}

/**
 * *_memcpy - copies memory area
 *
 * @dest: pointer to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to destination area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		}
		return (dest);
}

/**
 * *_strchr - locates a character in a string.
 *
 * @c: the character to locate
 * @s: pointer to the string to be searched
 *
 * Return: location of the first occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *z;

	z = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			z = &s[i];
			break;
		}
	}
	if (s[i] == c)
	{
		z = &s[i];
	}
	return (z);
}

/**
  * _strspn - returns length of specified substring
  * @s: string being checked
  * @accept: substring to be used
  *
  * Return: number of bytes in segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	if (s == 0 || accept == 0)
		return (n);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (n);
		}
	}
	return (n);
}

/**
  * *_strpbrk - searches a string for any set of bytes
  * @s: string to be searched
  * @accept: bytes to be searched for
  *
  * Return: pointer to s that matches one of the bytes and Null if none
  */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	p = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);

			}
		}
	}
	return (p);
}

/**
  * *_strstr - finds the first occurrence of the passed substring
  * @haystack: string to be searched in
  * @needle: substring to locate
  *
  * Return: pointer to beginning of located substring or NULL if not found
  */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	char *p;

	p = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			k = i;
			for (j = 0; needle[j] != '\0';)
			{
				if (haystack[k] == needle[j])
					k++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				p = &haystack[i];
			}
		}
	}
	return (p);
}
