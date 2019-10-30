#include "holberton.h"
/**
  *print_s - Function print string.
  *@string: Argument string type va_list.
  *Return: Nothing.
 */
int print_s(va_list string)
{
	char *str;
	int index;

	str = va_arg(string, char*);
	if (str == NULL)
		str = "(null)";
	for (index = 0; str[index] != 0; index++)
		_putchar(str[index]);
	return (index);
}

/**
  *print_c - Function print a character.
  *@c: Argument type va_list.
  *Return: Nothing.
 */

int print_c(va_list c)
{
	char ch = va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
  *print_i - Function print a integer.
  *@i: Argument type va_list.
  *Return: Nothing.
 */

int print_i(va_list i)
{
	int index;
	char *in;

	in = va_arg(i, char *);
	for (index = 0; in[index] != 0; index++)
		_putchar(in[index]);
	return (index);
}

/**
  *print_d - Function print a decimal.
  *@d: Argument type va_list.
  *Return: Nothing.
 */
int print_d(va_list d)
{
	int index;
	char *dc;

	dc = va_arg(d, char *);
	for (index = 0; dc[index] != 0; index++)
		_putchar(dc[index]);
	return (index);
}
/**
  *print_m - Function print a %.
  *@m: Argument type va_list.
  *Return: Nothing.
 */
int print_m(va_list m)
{
	(void) m;

	_putchar('%');
	return (1);
}
