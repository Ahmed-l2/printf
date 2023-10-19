#include "main.h"

int rev_str(char *str)
{
	int len = 0;
	int i;

	if (str)
	{
		while (str[len] != '\0')
		{
			len++;
		}

		for (i = len; i >= 0; i--)
		{
			_putchar(str[i]);
		}
	}

	return (len);
}
