#include "holberton.h"
int _printf(const char *format, ...)
{
	va_list fmt;
	void (*form)(va_list);
	int index;

	va_start(fmt, format);
	index = 0;

	printf("%c\n", format[0]);
	while (format[index] && format)
	{
		if (format[index] == '%')
		{
			form = get_spc(format[index + 1]);
			if (form)
				form(fmt);
		}
		else
		{
			_putchar(format[index]);
		}
		index++;
	}
	return (0);
}
