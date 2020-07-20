#include "holberton.h"
/**
* _printf - print values
* Description: twin of prinfts
* @format: text and format values
* @...: values
*
* Return: length of: values and text
*/
int _printf(const char *format, ...)
{
	long int i = 0, count = 0;
	va_list vl;

	if (format == NULL)
		return (-1);
	va_start(vl, format);
	while (format && format[i] != '\0')
	{
		long int next = i + 1;

		if ('%' == format[i])
		{
			if ('\0' == format[next])
				return (-1);
			else if ('%' == format[next])
			{
				_putchar('%'), i++, count++;
			}		        			
		}
		else
		_putchar(format[i]), count++;
		i++;
	}
	va_end(vl);
	return (count);
}
