#include "main.h"

/**
 * processFormatString - handles the process of formating the string
 * @format: string to be formatted
 * @args: uses the va_list args to choose the corresponding variable
 * Return: returns the length of the string
*/

int processFormatString(const char *format, va_list args)
{
	int i = 0, len = 0;
	int plusFlag, spaceFlag, hashFlag;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				len += _putchar('%');
			else if (format[i] == '\0')
				return (-1);

			else
			{
				plusFlag = 0;
				spaceFlag = 0;
				hashFlag = 0;

				while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
				{
					if (format[i] == '+')
						plusFlag = 1;
					else if (format[i] == ' ')
						spaceFlag = 1;
					else if (format[i] == '#')
						hashFlag = 1;
					i++;
				}

				len += handleFormatSpecifier(format[i], args,
						plusFlag, spaceFlag, hashFlag);
			}
		}

		else
			len += _putchar(format[i]);
		i++;
	}
	return (len);
}
