#ifndef _PRINTF
#define _PRINTF

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);

/**
  *struct specify - Struct for select specify of function printf.
  *@type: Check types of specify.
  *@ftype: Call function print types.
  *Description: Specify of function printf.
  */
typedef struct specify
{
	char *type;
	void (*ftype)(va_list);
} sp_t;
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
void (*get_spc(char s))(va_list);
void print_s(va_list string);
void print_c(va_list c);
void print_i(va_list i);
void print_d(va_list d);
void print_f(va_list f);

#endif
