#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * print_string - fnct print any string
 *
 * @string: the string to print
 *
 * return: the number of charcters in the string to print
 */
int print_string(char *string)
{
	int i = 0;

	if (string == NULL)
		string = "(null)";
	while (string[i] != '\0')
	{
        	write(STDOUT_FILENO, &string[i], 1);
        	i++;
	}
	return (i);
}
