#include "main.h"

int charToHex(char c);

/**
 * charToHex - Converts a character to a hexadecimal representation.
 * @c: The character to convert.
 *
 * Return: The length of the hexadecimal representation.
 */

int charToHex(char c)
{
    unsigned char uc = (unsigned char)c;
    int i, hexDigit;
    int length = 0;
    
    for (i = 1; i >= 0; i--) {
        hexDigit = (uc >> (i * 4)) & 0xF;
        if (hexDigit < 10) {
            putchar(hexDigit + '0');
            length += 1;
        } else {
            putchar(hexDigit - 10 + 'A');
            length += 1;
        }
    }
    return length;
}

/**
 * convert_S - Converts a string, handling non-printable characters.
 * @str: The string to convert.
 *
 * Return: The length of the converted string.
 */

int convert_S(char *str)
{
    int length = 0;
    int i;
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            putchar('\\');
            putchar('x');
            length += charToHex(str[i]);
            length += 2;
        }
        else
        {
            putchar(str[i]);
            length += 1;
        }
    }
    
    return length;
}