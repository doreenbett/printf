#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
/**
*find_func- looks for the specifier
*
*/
int (*find_func(char a))(va_list ars)
{
	int i = 0;

	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	while (arr[i].test)
	{
		if (a == arr[i].test[0])
			return (arr[i].f);

		i++;
	}
	return (NULL);
}
/**
*_printf - recreates the printf function
*@format: string with format specifier
*Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, j = 0;
	int (*m)(va_list);
	va_list args;

	va_start(args, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			m = find_func(format[i + 1]);
			j = m(args);
			i += 2;
		}
		putchar(format[i]);
		i++;
	}
	putchar('\n');
	va_end(args);

	return (j);
}
