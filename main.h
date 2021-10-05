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
typedef struct convert conver_t;
/*main functions*/
int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int _write_char(char);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int reversed(va_list);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
/*extra functions*/
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsigned_number(unsigned int);
#endif
