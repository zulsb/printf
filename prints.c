#include "holberton.h"
void print_s(va_list string)
{
	char *str;
	int index;

	str = va_arg(string, char*);
	if (str == NULL)
		str = "(null)";
	for (index = 0; str != 0; index++);
		_putchar(str[index]);
}
void print_c(va_list c)
{
	char ch = va_arg(c, int);
	_putchar(ch);
}
/**void print_i(va_list i)
  *{
  *	write(1, va_arg(i, int), _strlen((char *)i));
  *}
  *void print_d(va_list d)
  *{
  *	write(1, va_arg(d, int), _strlen((char *)d));
  *}
  *void print_f(va_list f)
  *{
  *	write(1, va_arg(f, double), _strlen((char *)f));
  *}
  */
