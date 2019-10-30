#include "holberton.h"

int print_numbers(unsigned int num)
{
	unsigned int divide, module;
	int count = 0;

	if (num != 0)
	{
		divide = (num / 10);
		module = (num % 10);
		count += print_numbers(divide);
		count++;
		_putchar(module + 48);
		return (count);
	}
	return (0);
}
