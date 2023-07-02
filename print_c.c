#include "main.h"

/**
 * print_c - Prints a char
 * @c: Given character
 * Return: 1
 */
int print_c(va_list c)
{
	char character = (char)va_arg(c, int);

	_putchar(character);
	return (1);
}

