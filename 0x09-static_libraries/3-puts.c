#include <stdio.h>
#include "main.h"

/**
 * _puts - prints the string
 * @str: a string
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
