#include "main.h"

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
		{"s", _print_sring},
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
