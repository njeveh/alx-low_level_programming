#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: pointer to array of arguments
 *
 * Return: NULL if ac == 0 or av == NULL | pointer to a new string,
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int str_len, i;

	if (ac == 0 || av == NULL)
		return (NULL);
	str_len = 0;
	for (i = 0; i < ac; ++i)
	{
		str_len += strlen(av[i]) + 1;
	}

	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);
	strcpy(str, av[0]);
	strcat(str, '\n');
	for (i = 1; i < ac; ++i)
	{
		strcat(str, av[i]);
		strcat(str, '\n');
	}
	return (str);
