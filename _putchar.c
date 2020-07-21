#include "holberton.h"
/**
 * _putchar - the print characters
 * @c: the char
 *
 * Return: 1- if is fine or -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
