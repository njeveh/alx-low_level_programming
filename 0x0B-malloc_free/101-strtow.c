#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * **strtow - splits a string into words
 * @str: pointer to the string to split
 * Return: pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **str_arr;
	char *word;
	int word_length, array_size;

	if (*str == "" || str == NULL)
		return (NULL);

	word_length = 0;
	array_size = 1;
	str_arr = (char **)malloc(sizeof(char *));
	if (str_arr == NULL)
		return (NULL);
	str_arr[0] = "";
	while (str != "\0")
	{
		while (*str != 32 && *str != 9 && *str != 10)
		{
			++word_length;
			++str;
		}
		word = (char *)malloc(sizeof(char) * (word_length + 1));
		if (word == NULL)
			return (NULL);
		str -= word_length;
		while (*str != 32 && *str != 9 && *str != 10)
		{
			*word = *str
			++str;
			++word
		}
		++word;
		*word = "\0";
		str_arr = reallocate_memory(array_size, word, str_arr);
		++array_size;
	}
	str_arr = reallocate_memory(array_size, NULL, str_arr);
	return (str_arr);

}

/**
 * **reallocate_memory - splits a string into words
 * @array_size: size of the new string array
 * @word: string to add to the array
 * @str_arr: the array to update
 * Return: pointer to an array of strings (words)
 */

char **reallocate_memory(int array_size, char *word, char **str_arr)
{
	char **temp_arr;

	str_temp = (char **)malloc(sizeof(char *) * array_size);
	if (str_temp == NULL)
		return (NULL);
	for (i = 0; i < array_size; ++i)
	{
		str_temp[i] = str_arr[i];
	}
	free(str_arr);
	str_temp[array_size - 1] = NULL;
	str_arr = str_temp;
	return (str_arr);
}
