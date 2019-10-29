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
	int index;
	char *in;

	in = va_arg(i, char *);
	for (index = 0; in[index] != 0; index++)
		_putchar(in[index]);
}

/**
  *print_d - Function print a decimal.
  *@d: Argument type va_list.
  *Return: Nothing.
 */
void print_d(va_list d)
{
	int index;
	char *dc;

	dc = va_arg(d, char *);
	for (index = 0; dc[index] != 0; index++)
		_putchar(dc[index]);
}

/**
  *print_f - Function print a float.
  *@f: Argument type va_list.
  *Return: Nothing.
 */
void print_f(va_list f)
{
	int index;
	char *ft;

	ft = va_arg(f, char *);
	for (index = 0; ft[index] != 0; index++)
		_putchar(ft[index]);
}

