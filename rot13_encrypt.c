#include "main.h"

/**
 * rot13_encrypt - Encrypts a string using the ROT13 algorithm.
 * @str: The string to be encrypted.
 *
 * Return: The length of the string.
 */

int rot13_encrypt(char *str)
{
    if (str == NULL)
        return 0;

    int length = 0;
    while (*str)
    {
        if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
        {
            char base = (*str >= 'A' && *str <= 'Z') ? 'A' : 'a';
            *str = (*str - base + 13) % 26 + base;
        }
        putchar(*str);
        str++;
        length++;
    }
    return length;
}