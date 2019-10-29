#include "holberton.h"
/**
  * get_spc - returns a function as the case may be.
  * @s: char.
  * Return: function or NULL.
  */
int (*get_spc(char s))(va_list)
{
	sp_t sp[] = {
		{"s", print_s},
		{"c", print_c},
		{"%", print_m},
		/* {"d", print_d}, */
		/* {"i", print_i}, */
		/* {"f", print_f}, */
		{NULL, NULL}
	};

	int index;

	index = 0;
	while (index < 3)
	{
		if (s == sp[index].type[0])
			return (sp[index].ftype);
		index++;
	}
	return (0);
}
