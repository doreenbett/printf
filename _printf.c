#include "main.h"
/**
*_printf - produces output according to a format
*@format: character string
*Return: numer of characters printed
*
*/
int _printf(const char *format, ...)
{
	int printed_chars;

	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{NULL, NULL}
	};
	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
