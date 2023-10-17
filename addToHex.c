#include "main.h"

/**
 * addToHex - Convert a pointer to a hexadecimal representation.
 * @ptr: The pointer to convert.
 *
 * Return: The number of characters printed.
 */

int addToHex(void *ptr)
{
	unsigned long int num = (unsigned long int)ptr;
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

	return (_printf("0x%s", reversedBuffer));
}
