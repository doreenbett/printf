#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
/**
*struct convert - specifies a struct
*@sym: test character
*@f: the functions associated
*
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t

int _printf(const char *format, ...);
int parse(const char *format, conver_t f_list[], va_list arg_list);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int (*find_func(char a))(va_list args);
#endif
