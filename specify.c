#include "holberton.h"
void (*get_spc(char s))(va_list)
{
	sp_t sp[] = {
		{"s", print_s},
		{"c", print_c},
		/* {"d", print_d}, */
		/* {"i", print_i}, */
		/* {"f", print_f}, */
		{NULL, NULL}
	};

	int index;
	
	index = 0;
	while (index < 2)
	{
		if (s == sp[index].type[0])
			return (sp[index].ftype);
		index++;
	}
	return (NULL);
}
