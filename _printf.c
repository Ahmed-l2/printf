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
        int len = 0;

        va_start(args, format);
        if (!format)
                return (-1);

        len = processFormatString(format, args);

        va_end(args);
        return (len);
}
