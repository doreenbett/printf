#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
*_printf - recreates the printf function
*@format: string with format specifier
*Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i = 0, char *n;

	va_list arg;

	va_start(arg, format);
	for (n = format; n != '\0'; n++)
	{
		while (*n != '%')
		{
			putchar(*n);
			n++;
		}
		n++;
	}
	switch (*n)
	{
		case 'c':
			i = va_arg(arg, int);
			{
				putchar(i);
				break;
			}
		case 's':
			s = va_arg(arg, char *);
			{
				puts(s);
				break;
			}
	}

	va_end(arg);
	return (n);
}
