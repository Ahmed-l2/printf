#include "main.h"

int intToHex_x(unsigned int num, int hashFlag);
int intToHex_X(unsigned int num, int hashFlag);

/**
 * intToHex - function that handles the conversion of integer to a hexdecimal
 * @specifier: checks if the specific is X or x
 * @num: given int
 * @hashFlag: checks for the '#' flag
 * Return: returns length
 */

int intToHex(char specifier, unsigned int num, int hashFlag)
{
	int len = 0;

	if (specifier == 'X')
	{
		len = intToHex_X(num, hashFlag);
	}
	else
	{
		len = intToHex_x(num, hashFlag);
	}

	return (len);
}

/**
 * intToHex_X - handles the %x conversion
 * @num: given integer
 * @hashFlag: checks for the '#' flag
 * Return: returns length
 */


int intToHex_X(unsigned int num, int hashFlag)
{
	int len = 0;
	char hexBuffer[20];
	char reversedBuffer[20];
	int remainder;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (hashFlag)
	{
		_putchar('0');
		_putchar('X');
	}

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexBuffer[len] = '0' + remainder;
		}
		else
		{
			hexBuffer[len] = 'A' + (remainder - 10);
		}
		num /= 16;
		len++;
	}

	for (i = 0; i < len; i++)
	{
		reversedBuffer[i] = hexBuffer[len - i - 1];
	}

	for (i = 0; i < len; i++)
	{
		_putchar(reversedBuffer[i]);
	}

	return (len + (hashFlag ? 2 : 0));
}

/**
 * intToHex_x - handles the %x conversion
 * @num: given integer
 * @hashFlag: checks for the '#' flag
 * Return: returns length
 */

int intToHex_x(unsigned int num, int hashFlag)
{
	int len = 0;
	char hexBuffer[20];
	char reversedBuffer[20];
	int remainder;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (hashFlag)
	{
		_putchar('0');
		_putchar('X');
	}

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			hexBuffer[len] = '0' + remainder;
		}
		else
		{
			hexBuffer[len] = 'a' + (remainder - 10);
		}
		num /= 16;
		len++;
	}

	for (i = 0; i < len; i++)
	{
		reversedBuffer[i] = hexBuffer[len - i - 1];
	}

	for (i = 0; i < len; i++)
	{
		_putchar(reversedBuffer[i]);
	}

	return (len + (hashFlag ? 2 : 0));
}
