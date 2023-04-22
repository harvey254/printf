#include "main.h"

/**
 * _print_binary - prints a binary number from int
 * @arg_list: the action pointer
 *
 * Return: binary number
 */

int _print_binary(va_list arg_list)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(arg_list, unsigned int);
	s = convert(n, 2);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}

/**
 * _print_hex_u - prints a hex number from int
 * @arg_list: pointer
 *
 * Return:  count
 */

int _print_hex_u(va_list arg_list)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(arg_list, unsigned int);
	s = convert(n, 16);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}

/**
 * _print_hex_l - prints a hex number from int
 * @arg_list: pointer
 *
 * Return: count
 */

int _print_hex_l(va_list arg_list)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(arg_list, unsigned int);
	s = convert(n, 16);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'F')
			count += _putchar(s[i] + ' ');
		else
			count += _putchar(s[i]);
	}
	return (count);
}
