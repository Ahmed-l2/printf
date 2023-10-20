#include "main.h"

/**
 * rot13_encrypt - Encrypts a string using the ROT13 algorithm.
 * @str: The string to be encrypted.
 *
 * Return: The length of the string.
 */

int rot13_encrypt(char *str)
{
	int i = 0, j, len = 0;
	char *temp;

	while (str[len] != '\0')
	{
		len++;
	}

	temp = malloc(len * sizeof(char));

	if (temp == NULL)
	{
		return (0);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			temp[i] = str[i] + 13;
		}
		else if
			((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			temp[i] = str[i] - 13;
		}
		else
		{
			(temp[i] = str[i]);
		}
		i++;
	}
	temp[i] = '\0';

	for (j = 0; temp[j] != '\0'; j++)
	{
		_putchar(temp[j]);
	}
	free(temp);

	return (len);
}
