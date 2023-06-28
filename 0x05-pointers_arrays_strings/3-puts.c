#include "main.h"

/**
 * _puts - funtions that prints a string
 * @str: - pointer to the string
 * Return: string and new line
 */

void _puts(char *str)
{
	ints i = 0;

	while (str[i])
	(
	 _putchar(str[i]);
	 i++;
	)
	_putchar('\n');
}
