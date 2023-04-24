#include <stdio.h>
#include <stdarg.h>

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

	va_start(osarg, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
				{
					char character = va_arg(osarg, int);

					putchar(character);
					c++;
					break;
				}
				case '%':
				{
					putchar('%');
					c++;
					break;
				}
				case 's':
				{
					fputs(va_arg(osarg, char*), stdout);
					c++;
					break;
				}
			}
		}
		else
		{
			putchar(*format);
			c++;
		}
		format++;
	}
	va_end(osarg);
	return (c);
}
