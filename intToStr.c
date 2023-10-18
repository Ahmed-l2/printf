#include "main.h"

/**
 * intToStr - Converts an integer to a string and prints it
 * @num: The integer to convert and print
 * @plusFlag: checks for '+' flag
 * @spaceFlag: checks for the ' ' (space) flag
 * Return: The length of the printed string,
 * including negative sign if applicable
*/

int intToStr(int num, int plusFlag, int spaceFlag)
{
	int length = 0, isNegative = 0, digits[14], i, min = 0;

	if (num == INT_MIN)
	{
		_putchar('-');
		_putchar('2');
		num = 147483648;
		min = 2;
	}
	if (num < 0)
	{
		_putchar('-');
		isNegative = 1;
		num = -num;
	}
	else if (plusFlag)
		_putchar('+');
	else if (spaceFlag)
		_putchar(' ');
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
	return (length + isNegative + min + plusFlag + spaceFlag);
}
