#include "main.h"
#include <string.h>
#include <unistd.h>
#include  <stdio.h>

/**
 * get_print - look for the specifier
 * @c: variable to the function
 * Return: function
 */
int (*get_print(char c))(va_list)
{
	int i = 0;
	print_type arr[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_decimal},
		{"i", _print_int},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (c == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
