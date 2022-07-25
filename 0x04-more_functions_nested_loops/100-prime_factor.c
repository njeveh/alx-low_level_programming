#include <stdio.h>

/**
  * main - finds the largest prime factor of 612852475143
  *
  *Return: 0 on succesful completion
  */

int main(void)
{
	unsigned long int current_divider = 2, largest;
	unsigned long int number = 612852475143;

	while (number != 0)
	{
		if ((number % current_divider) != 0)
		{
			current_divider += 1;
		}
		else
		{
			largest = current_divider;
			number /= current_divider;
			if (number == 1)
			{
				printf("%ld\n", largest);
				break;
			}
		}
	}
	return (0);
}
