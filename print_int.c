#include "main.h"
/**
 * print_integer - fnct that print itegegrs
 *
 * @num: number
 *
 * Return: l
 */
int print_integer(int num)
{
	char buff[20];

	int l = snprintf(buff, 20, "%d", num);

	write(STDOUT_FILENO, buff, l);

	return (l);
}
