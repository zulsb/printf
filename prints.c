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
	unsigned int positive;
	int inter, count;

	inter = va_arg(i, int);
	if (inter < 0)
	{
		positive = (inter * -1);
		_putchar('-');
		count = 1;
	}
	else
		positive = inter;
	if (positive > 9)
	{
		count += print_numbers(positive);
		return (count);
	}
	else
	{
		_putchar(positive + 48);
		return (++count);
	}
}

/**
  *print_d - Function print a decimal.
  *@d: Argument type va_list.
  *Return: Nothing.
 */
int print_d(va_list d)
{
	unsigned int positive;
	int dec, count;

	dec = va_arg(d, int);
	if (dec < 0)
	{
		positive = (dec * -1);
		_putchar('-');
		count = 1;
	}
	else
		positive = dec;
	if (positive > 9)
	{
		count += print_numbers(positive);
		return (count);
	}
	else
	{
		_putchar(positive + 48);
		return (++count);
	}
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
