#include "main.h"

/**
 * _puts - Prints a string and returns the length
 * @str: The string to be printed
 *
 * Return: returns the length of the printed string
*/

int _puts(char *str)
{
	int strlen = 0;

	if (str == NULL)
	{
		return (puts("(null)"));
	}
	else
	{
		while (*str != '\0')
		{
			strlen += _putchar(*str);
			str++;
		}
	}

	return (strlen);
}
