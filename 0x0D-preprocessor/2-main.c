#include <stdio.h>

/**
 * main - a program that prints the name of the file it was compiled from,
 * followed by a new line.
 *
 * RETURN: 0 on success
 */

int main(void)
{
	printf("%s\n", __FILE__);
}
