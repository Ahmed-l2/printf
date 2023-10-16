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
                len += handleFormatSpecifier(format[i], args);
            }
        }
        else
            len += _putchar(format[i]);
        i++;
    }
    return len;
}