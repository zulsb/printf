#include "holberton.h"
/**
  *print_s - Function print string.
  *@string: Argument string type va_list.
  *Return: Nothing.
 */
void print_s(va_list string)
{
	char *str;
	int index;

	str = va_arg(string, char*);
	if (str == NULL)
		str = "(null)";
	for (index = 0; str[index] != 0; index++)
		_putchar(str[index]);
}

/**
  *print_c - Function print a character.
  *@c: Argument type va_list.
  *Return: Nothing.
 */

void print_c(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);
}

/**
  *print_i - Function print a integer.
  *@i: Argument type va_list.
  *Return: Nothing.
 */

void print_i(va_list i)
{
	write(1, va_arg(i, int), _strlen((char *)i));
}

/**
  *print_d - Function print a decimal.
  *@d: Argument type va_list.
  *Return: Nothing.
 */
void print_d(va_list d)
{
	write(1, va_arg(d, int), _strlen((char *)d));
}

/**
  *print_f - Function print a float.
  *@f: Argument type va_list.
  *Return: Nothing.
 */
void print_f(va_list f)
{
	write(1, va_arg(f, double), _strlen((char *)f));
}

