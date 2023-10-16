#include "main.h"

/**
 * handleFormatSpecifier - handles the formatting for
 * the corresponding specifier
 * @specifier: format specifier
 * @args: uses the va_list args to choose the corresponding variable
 * Return: returns the length of the string
 */

int handleFormatSpecifier(char specifier, va_list args)
{
	int len = 0;

	switch (specifier)
	{
		case 'c':
			len += _putchar(va_arg(args, int));
			break;
		case 's':
			len += _puts(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			len += intToStr(va_arg(args, int));
			break;
		case 'u':
			len += unsignedIntToStr(va_arg(args, unsigned int));
		case 'b':
			len += decToBin(va_arg(args, unsigned int));
			break;
		default:
			len += _putchar('%') + _putchar(specifier);
			break;
	}
	return (len);
}
