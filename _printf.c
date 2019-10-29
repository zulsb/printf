#include "holberton.h"

/**
  *_printf - Function print output results.
  *@format: Argument pointer type. 
  *Return: 0.
  *
  */


int _printf(const char *format, ...)
{
	va_list fmt;
	void (*form)(va_list);
	int index;

	va_start(fmt, format);
	index = 0;

	if (format == NULL || (format[index] == '%' && format[index + 1] == 0))
		return (-1);
	while (format[index] && format)
	{
		if (format[index] == '%')
		{
			form = get_spc(format[index + 1]);
			if (form)
			{
				form(fmt);
				index++;
			}
		}
		else
		{
			_putchar(format[index]);
		}
		index++;
	}
	return (0);
}
