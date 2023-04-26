#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * switches - to do all the cases
 *
 * @s: the format
 * @osarg: my arg
 *
 * Return: number of char to print
 */
int switches(char s, va_list osarg)
{
	int c = 0;

	switch (s)
	{
	case 'c':
		c += print_character(va_arg(osarg, int));
		break;
	case 's':
		c += print_string(va_arg(osarg, char *));
		break;
	case '%':
		c += print_character('%');
		break;
	case 'i':
	case 'd':
		c += print_integer(va_arg(osarg, int));
		break;
	default:
		c += print_character('%');
		c += print_character(s);
		break;
	}

	return (c);
}
