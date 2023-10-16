#include "main.h"

/**
 * decToBin - converts integer to binary
 * @num: given integer
 * Return: length
 */

int decToBin(unsigned int num)
{
	char binary[32];
	int i = 0;
	int j, len;

	while (num > 0)
	{
		binary[i++] = '0' + (num % 2);
		num /= 2;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j]);
		len++;
	}
	return (len);
}
