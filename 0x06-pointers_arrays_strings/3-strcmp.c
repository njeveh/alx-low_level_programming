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
