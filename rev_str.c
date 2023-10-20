#include "main.h"

/**
 * rev_str - a function that reverses a string
 * @str: given string
 * Return: returns length of string
 */

int rev_str(char *str)
{
	int len;
	int i;
	char *s;

	s = str;
	if (s == NULL)
	{
		s = "(nil)";
	}

	for (len = 0; str[len]; len++)
		;
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	return (len);
