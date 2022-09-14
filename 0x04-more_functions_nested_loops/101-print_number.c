#include "main.h"
#include <limits.h>

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int tens, digit;
	int number = n;
	double total_tens = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			number = n * -1;
			_putchar('-');
		}
		while (total_tens <= number)
			total_tens *= 10;
		tens = total_tens / 10;
		while (tens >= 1)
		{
			digit = number / tens;
			_putchar(digit + '0');
			number = (number - (tens * digit));
			tens /= 10;
		}
	}
}
