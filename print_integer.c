#include "main.h"
/**
 * print_interger - it is a new function that prints int= like
 * printf
 * @num: a variable
 * Return: always l
 */


int print_integer(int num)
{
	char buff[20];
	int l = snprintf(buff, 20, "%d", num);

	write(STDOUT_FILEND, buff, l);
	return (l);
}
