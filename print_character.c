#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * print_character - to print any char
 *
 * @c: the character
 *
 * Return: the n umber of char
 */
int print_character(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}
