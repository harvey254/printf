#include "main.h"
/**
 * _printf - twin of printf
 * @format: character string
 *
 * Return:  the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg_list;
        int count = 0;

	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"i", _print_int},
		{"r", _print_reverse},
		{"R", _print_rot13},
		{"b", _print_binary},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_hex_l},
		{"X", _print_hex_u},
		{"d", _print_int},
		{NULL, NULL}
	};

	va_start(arg_list, format);

	count = get_print(format, argument, arg_list);

	va_end(arg_list);

	return (count);
}
