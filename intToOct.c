#include "main.h"

/**
 * intToOct - function that converts an int to its octal value
 * @num: given integer
 * @hashFlag: checks for the '#' flag
 * Return: returns the length
 */

int intToOct(unsigned int num, int hashFlag)
{
	char octalNumber[100];
	int i = 0, len = 0, j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (hashFlag)
	{
		_putchar('0');
		len++;
	}

	while (num > 0)
	{
		octalNumber[i] = '0' +  (num % 8);
		num /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octalNumber[j]);
		len++;
	}
	return (len);
}
