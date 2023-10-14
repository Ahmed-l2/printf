#include "main.h"

/**
 * intToStr - Converts an integer to a string and prints it
 * @num: The integer to convert and print
 *
 * Return: The length of the printed string,
 * including negative sign if applicable
*/

int intToStr(int num)
{
	int length = 0;
	int isNegative = 0;
	int digits[14];
	int i;

	if (num < 0)
	{
		_putchar('-');
		isNegative = 1;
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
	{
		while (num > 0)
		{
			digits[length] = num % 10;
			num /= 10;
			length++;
		}

		for (i = length - 1; i >= 0; i--)
		{
			_putchar('0' + digits[i]);
		}
	}

	return (length + isNegative);
}
