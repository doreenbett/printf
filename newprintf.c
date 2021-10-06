#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
*find_func - looks for the specifier
*@P: character
*Return: NULL
*/
int (*find_func(char P))(va_list args)
{
	int i = 0;

	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};
	while (arr[i].test)
	{
		if (arr[i].test[0] == P)
			return (arr[i].f);
		i++;
	}
	return (NULL);
}

/**
*_printf - recreates the printf function
*@format: string with format specifier
*Return: number of characters printed
*
*/

int _printf(const char *format, ...)
{
	int count, i = 0;
	int (*m)(va_list);
	va_list args;

	va_start(args, format);
	i = 0;
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				count += putchar(format[i]);
				i++;
			}
			else
			{
				m = find_func(format[i + 1]);
				count += m(args);
				i += 2;
			}
		}
		count += putchar(format[i]);
		i++;
	}
	putchar('\n');
	va_end(args);
	return (count);
}
