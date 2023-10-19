#include "main.h"

/**
 * handleFormatSpecifier - handles the formatting for
 * the corresponding specifier
 * @specifier: format specifier
 * @args: uses the va_list args to choose the corresponding variable
 * @plusFlag: checks for '+' flag
 * @spaceFlag: checks for the ' ' (space) flag
 * @hashFlag: checks for the '#' flag
 * Return: returns the length of the string
 */

int handleFormatSpecifier(char specifier, va_list args, int plusFlag,
		int spaceFlag, int hashFlag)
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
			len += intToStr(va_arg(args, int), plusFlag, spaceFlag);
			break;
		case 'u':
			len += unsignedIntToStr(va_arg(args, unsigned int));
			break;
		case 'b':
			len += decToBin(va_arg(args, unsigned int));
			break;
		case 'o':
			len += intToOct(va_arg(args, unsigned int), hashFlag);
			break;
		case 'x':
		case 'X':
			len += intToHex(specifier, va_arg(args, unsigned int), hashFlag);
			break;
		case 'S':
			len += convert_S(va_arg(args, char *));
			break;
		case 'p':
		    len += addToHex(va_arg(args, void *));
			break;
		case 'r':
			len += rev_str(va_arg(args, char *));
			break;
		default:
			len += _putchar('%') + _putchar(specifier);
			break;
	}
	return (len);
}
