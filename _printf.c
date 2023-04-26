#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _printf - function that produces output like real printf
 *
 * @format:  is a character string
 * Return: c
 */
int _printf(const char *format, ...)
{
	va_list osarg;
	int c = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(osarg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			c += switches(*format, osarg);
		}
		else
		{
			c += print_character(*format);
		}

		format++;
	}
	va_end(osarg);

	return (c);
}
