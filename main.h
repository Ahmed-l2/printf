#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int processFormatString(const char *format, va_list args);
int handleSpecifier(char specifier, va_list args, int plusFlag,
		int spaceFlag, int hashFlag);
int intToStr(int num, int plusFlag, int spaceFlag);
int unsignedIntToStr(unsigned int num);
int intToHex(char specifier, unsigned int num, int hashFlag);
int intToOct(unsigned int num, int hashFlag);
int decToBin(unsigned int num);
int _putchar(char c);
int _puts(char *str);
int rev_str(char *str);
int convert_S(char *str);
int addToHex(void *ptr);
int rot13_encrypt(char *str);



#endif
