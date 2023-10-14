#include "main.h"

/**
 * _printf -  a custom recreation of the printf function
 *
 * @format: a constant pointer char
 * Return: returns the length of the printed string
 */

int _printf(const char *format, ...)
{
	va_list args;

	int i = 0;
	int num;
	int len = 0;

	va_start(args, format);

	if (!format)
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				len += putchar('%');
			}
			else if (format[i] == '\0')
			{
				break;
			}
			else
			{
				switch (format[i])
				{
					case 'c':
						len += _putchar(va_arg(args, int));
						break;
					case 's':
						len += _puts(va_arg(args, char *));
						break;
					case 'd':
					case 'i':
						num = va_arg(args, int);
						len += intToStr(num);
						break;
					default:
						len += _putchar('%');
						len += _putchar(format[i]);
						break;
				}
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}