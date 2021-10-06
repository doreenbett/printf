#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_c - prints character
*@args: character argument
*return: number of characters
*/
int print_c(va_list args)
{
	intc;

	c = va_arg(args, int);

	return (putchar(c));

}

/*
*print_s - prints a string
*@args: character arguments
*return: count
*/

int print_s(va_list args)
{
	int i. count = 0;
	char *str;

	i = 0;

	str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";
	while (str[i])  != '\0')
	{
		putchar(str[i]);
		i++;
		count++;
	}
	return(count);
}

/*
*print_percent - checks the percent sign
*@args: character arguments
*return: return the percent sign
*/

int print_percent(va_list args)
{
	char*str;
	str = "%";

	if (va_arg(args, int) == *str)
	{
		return(*str);

	}
	return (*str);
}