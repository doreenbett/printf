#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

/**
*struct specifier - specifies a struct
*@test: test character
*@f: the functions associated
*/

typedef struct specifier
{
	char *test;
	int (*f)(va_list args);
} spec;

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int (*find_func(char P))(va_list args);

#endif
