#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

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
	int i;

	if (format == NULL)
		return (-1);

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

				write(STDOUT_FILENO, &character, 1);
				c++;
				break;
			}
			case '%':
			{
				write(STDOUT_FILENO, "%", 1);
				c++;
				break;
			}
			case 's':
			{
				char *string = va_arg(osarg, char*);

				i = 0;
				if (string == NULL)
					string = "(null)";
				while (string[i] != '\0')
				{
					write(STDOUT_FILENO, &string[i], 1);
					i++;
					c++;
				}
				break;
			}
			default:
			{
				write(STDOUT_FILENO, "%", 1);
				write(STDOUT_FILENO, &*format, 1);
				c = c + 2;
				break;
			}
			}
		}
		else
		{
			write(STDOUT_FILENO, format, 1);
			c++;
		}
		format++;
	}
	va_end(osarg);
	return (c);
}
