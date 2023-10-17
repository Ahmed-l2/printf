#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


int intToStr(int num);
int _puts(char *str);
int _putchar(char c);
int processFormatString(const char *format, va_list args);
int handleFormatSpecifier(char specifier, va_list args);
unsigned int unsignedIntToStr(unsigned int num);
int decToBin(unsigned int num);
int _printf(const char *format, ...);
int intToOct(unsigned int num);
int intToHex(char specifier, unsigned int num);
int convert_S(char *str);
int addToHex(void *ptr);


#endif
