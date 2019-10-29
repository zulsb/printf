#include "holberton.h"
/**
  * _strlen - Returns the length of a string.
  * @s: char pointer.
  * Return: length of a string.
  */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != 0)
	{
		count++;
		s++;
	}
	return (count);
}
/**
  * _strcmp - compares two strings.
  * @s1: first string.
  * @s2: second string.
  * Return: a.
  */
int _strcmp(char *s1, char *s2)
{
	int a, index;

	index = 0;
	while (s1[index] != 0)
	{
		a = s1[index] - s2[index];
		if (a != 0)
			return (a);
		index++;
	}
	return (a);
}
